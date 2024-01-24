import networkx as nx
import random
import argparse
def generate_dag(num_vertices, num_edges):
    G = nx.DiGraph()
    vertices = list(range(1, num_vertices + 1))
    G.add_nodes_from(vertices)

    for i in range(2, num_vertices + 1):
        parent = random.choice(vertices[:i])
        weight = random.randint(1, 10)

        if not nx.has_path(G, parent, i):
            G.add_edge(parent, i, weight=weight)

    while G.number_of_edges() < num_edges:
        source = random.choice(vertices)
        target = random.choice(vertices)
        weight = random.randint(1, 10)

        if source != target and not nx.has_path(G, target, source):
            G.add_edge(source, target, weight=weight)

    return G.edges(data=True)

# Example for 1000 vertices and 1000 edges
parser = argparse.ArgumentParser()
parser.add_argument('vertices')
parser.add_argument('edges')
args = parser.parse_args()
edges_data = generate_dag(int(args.vertices), int(args.edges))
for edge_data in edges_data:
    source, target, weight = edge_data
    print(f"{source} {target} {weight['weight']}")
