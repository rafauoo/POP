#include "a_star.h"
#include <queue>
#include <algorithm>
#include <limits>
#include <cmath>
struct Node {
    int id;
    int costFromStart; // Koszt dotarcia do tego wierzchołka z punktu startowego
    int estimatedCostToGoal; // Szacowany koszt dotarcia z tego wierzchołka do celu

    // Konstruktor
    Node(int id, int costFromStart, int estimatedCostToGoal)
        : id(id), costFromStart(costFromStart), estimatedCostToGoal(estimatedCostToGoal) {}

    // Operator porównania potrzebny do użycia w kolejce priorytetowej
    bool operator>(const Node& other) const {
        // Porównujemy sumę kosztu od startu do tego wierzchołka i szacowanego kosztu do celu
        return (costFromStart + estimatedCostToGoal) > (other.costFromStart + other.estimatedCostToGoal);
    }
};

int heuristic(int nodeFrom, int nodeTo) {
    return nodeTo - nodeFrom;
}

std::pair<std::vector<int>, int> a_star(std::map<int, std::vector<std::pair<int, int>>> graph, int nodeFrom, int nodeTo) {
    std::vector<int> path;
    int cost = 0;

    std::priority_queue<Node, std::vector<Node>, std::greater<Node>> openSet;
    std::map<int, int> costFromStart;
    std::map<int, int> cameFrom;

    openSet.push(Node(nodeFrom, 0, heuristic(nodeFrom, nodeTo)));
    costFromStart[nodeFrom] = 0;

    while (!openSet.empty()) {
        Node current = openSet.top();

        openSet.pop();

        if (current.id == nodeTo) {
            path.push_back(current.id);
            int current_id = current.id;
            while (cameFrom.find(current_id) != cameFrom.end()) {
                current_id = cameFrom[current_id];
                path.push_back(current_id);
            }
            
            std::reverse(path.begin(), path.end());
            return std::make_pair(path, costFromStart[nodeTo]);
        }
        std::vector<std::pair<int,int> > neighbours = graph[current.id];
        for (std::pair<int,int> neighbor : neighbours) {
            int newCostFromStart = current.costFromStart + neighbor.second;

            if (!costFromStart.count(neighbor.first) || newCostFromStart < costFromStart[neighbor.first]) {
                cameFrom[neighbor.first] = current.id;
                costFromStart[neighbor.first] = newCostFromStart;
                int estimatedCostToGoal = heuristic(neighbor.first, nodeTo);

                openSet.push(Node(neighbor.first, newCostFromStart, estimatedCostToGoal));
            }
        }
    }

    return std::make_pair(path, -1);
}

