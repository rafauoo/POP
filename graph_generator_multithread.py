import networkx as nx
import random
import argparse
import threading
from concurrent.futures import ThreadPoolExecutor

class ThreadSafeRandom:
    def __init__(self):
        self.lock = threading.Lock()

    def randint(self, a, b):
        with self.lock:
            return random.randint(a, b)

def add_edges_range(G, vertices, random_generator, start, end):
    local_G = nx.DiGraph()
    local_G.add_nodes_from(vertices)

    for i in range(start, end):
        parent = random.choice(vertices[:i])
        weight = random_generator.randint(1, 10)

        if not nx.has_path(local_G, parent, i):
            local_G.add_edge(parent, i, weight=weight)

    with G_lock:
        G.add_edges_from(local_G.edges(data=True))

def generate_dag_parallel(num_vertices, num_edges, num_threads=4):
    G = nx.DiGraph()
    vertices = list(range(1, num_vertices + 1))
    G.add_nodes_from(vertices)
    random_generator = ThreadSafeRandom()

    with ThreadPoolExecutor(max_workers=num_threads) as executor:
        step = max(1, num_vertices // num_threads)  # Avoid zero step
        futures = []

        for i in range(2, num_vertices + 1, step):
            end = min(i + step, num_vertices + 1)
            futures.append(executor.submit(add_edges_range, G, vertices, random_generator, i, end))

        for future in futures:
            future.result()

    while G.number_of_edges() < num_edges:
        source = random.choice(vertices)
        target = random.choice(vertices)
        weight = random_generator.randint(1, 10)

        if source != target and not nx.has_path(G, target, source):
            G.add_edge(source, target, weight=weight)

    return G.edges(data=True)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('vertices', type=int)
    parser.add_argument('edges', type=int)
    args = parser.parse_args()
    
    edges_data = generate_dag_parallel(args.vertices, args.edges)
    
    for edge_data in edges_data:
        source, target, weight = edge_data
        print(f"{source} {target} {weight['weight']}")

if __name__ == "__main__":
    G_lock = threading.Lock()
    main()
