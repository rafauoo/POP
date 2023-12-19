import networkx as nx
import random
from copy import deepcopy

def has_cycle(graph, start, end):

    G = deepcopy(graph)
   

    G.add_edge(start, end, weight=1)
    queue = [(start, iter(G[start]))]
    while queue:
        _, neighbors = queue[-1]
        try:
            next_neighbor = next(neighbors)
            if next_neighbor == start:
                return True  # Cykl został znaleziony
            queue.append((next_neighbor, iter(G[next_neighbor])))

        except StopIteration:
            queue.pop()

    return False

def generate_graph_with_multiple_paths_and_edges(num_vertices, num_edges):
    G = nx.DiGraph()
    vertices = list(range(1, num_vertices + 1))

    G.add_nodes_from(vertices)

    edges_data = []

    for i in range(1, num_vertices):
        possible_targets = vertices[i:]
        target = random.choice(possible_targets)
        weight = random.randint(1, 10)

        if target not in G or not has_cycle(G, i, target):
            G.add_edge(i, target, weight=weight)
            edges_data.append((i, target, weight))

    for i in range(2, num_vertices, 2):
        target = random.choice(vertices[:i])
        weight = random.randint(1, 10)

        if target not in G or not has_cycle(G, i, target):
            G.add_edge(i, target, weight=weight)
            edges_data.append((i, target, weight))

    for _ in range(num_edges - num_vertices + 1):
        source = random.choice(vertices)
        target = random.choice(vertices)
        weight = random.randint(1, 10)

        if source in G and target in G and not has_cycle(G, source, target):
            G.add_edge(source, target, weight=weight)
            edges_data.append((source, target, weight))

    return edges_data

# Przykład dla 50 wierzchołków i 400 krawędzi
edges_data = generate_graph_with_multiple_paths_and_edges(50, 400)
for edge_data in edges_data:
    print(f"{edge_data[0]} {edge_data[1]} {edge_data[2]}")