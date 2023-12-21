#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <limits>

std::pair<std::vector<int>, int> dijkstra(std::map<int, std::vector<std::pair<int, int>>> graph, int nodeFrom, int nodeTo) {
    const int INF = std::numeric_limits<int>::max();

    std::map<int, int> distance;
    std::map<int, std::vector<int>> optimalPaths;
    std::set<int> visited;

    for (const auto& pair : graph) {
        for (const auto& neighbour : pair.second) {
            distance[neighbour.first] = INF;
        }
    }

    distance[nodeFrom] = 0;
    optimalPaths[nodeFrom] = {nodeFrom};

    while (!visited.count(nodeTo)) {
        int current_node = -1;
        int min_distance = INF;

        for (const auto& pair : distance) {
            if (!visited.count(pair.first) && pair.second < min_distance) {
                min_distance = pair.second;
                current_node = pair.first;
            }
        }

        if (current_node == -1) {
            break;
        }

        visited.insert(current_node);

        for (const auto& neighbor : graph[current_node]) {
            int neighbor_node = neighbor.first;
            int edge_weight = neighbor.second;

            if (distance[current_node] + edge_weight < distance[neighbor_node]) {
                distance[neighbor_node] = distance[current_node] + edge_weight;
                optimalPaths[neighbor_node] = optimalPaths[current_node];
                optimalPaths[neighbor_node].push_back(neighbor_node);
            }
        }
    }

    return std::make_pair(optimalPaths[nodeTo], distance[nodeTo]);
}