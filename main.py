import heapq

class Graph:
    def __init__(self):
        self.edges = {}
        self.weights = {}

    def add_edge(self, from_node, to_node, weight):
        if from_node not in self.edges:
            self.edges[from_node] = []
        self.edges[from_node].append(to_node)
        self.weights[(from_node, to_node)] = weight

def a_star(graph, start, end):
    open_set = [(0, start)]
    came_from = {}
    g_score = {start: 0}
    f_score = {start: heuristic(start, end)}

    while open_set:
        current = heapq.heappop(open_set)[1]
        if current == end:
            return reconstruct_path(came_from, end)

        for neighbor in graph.edges.get(current, []):
            tentative_g_score = g_score[current] + graph.weights[(current, neighbor)]
            if neighbor not in g_score or tentative_g_score < g_score[neighbor]:
                came_from[neighbor] = current
                g_score[neighbor] = tentative_g_score
                f_score[neighbor] = tentative_g_score + heuristic(neighbor, end)
                heapq.heappush(open_set, (f_score[neighbor], neighbor))

    return None

def reconstruct_path(came_from, current):
    total_path = [current]
    while current in came_from:
        current = came_from[current]
        total_path.insert(0, current)
    return total_path

def heuristic(node, goal):
    # Implementacja heurystyki dla liczb
    return abs(node - goal)

# Testowanie algorytmu A*
graph = Graph()
graph.add_edge(0, 1, 1)
graph.add_edge(0, 2, 3)
graph.add_edge(1, 3, 5)
graph.add_edge(2, 3, 1)
graph.add_edge(1, 4, 2)
graph.add_edge(3, 4, 2)

path = a_star(graph, 0, 3)
print("Najkrótsza ścieżka od 0 do 3:", path)