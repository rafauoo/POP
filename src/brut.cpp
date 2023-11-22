#include "brut.h"
#include <map>
#include <vector>
#include <climits>
#include <functional>
#include <algorithm>

std::pair<std::vector<int>, int> brut(
    std::map<int, std::vector<std::pair<int, int>>> graph,
    int nodeFrom,
    int nodeTo
) {
    std::vector<int> currentPath;
    std::vector<int> bestPath;
    int currentCost = 0;
    int bestCost = INT_MAX;

    // Helper function for DFS
    std::function<void(int)> dfs = [&](int currentNode) {
        currentPath.push_back(currentNode);

        if (currentNode == nodeTo) {
            // Reached the destination node
            if (currentCost < bestCost) {
                // Update the best path and cost
                bestPath = currentPath;
                bestCost = currentCost;
            }
        } else {
            // Explore neighbors
            for (const auto& neighbor : graph[currentNode]) {
                int nextNode = neighbor.first;
                int edgeCost = neighbor.second;

                // Check if the neighbor is not already in the path to avoid cycles
                if (std::find(currentPath.begin(), currentPath.end(), nextNode) == currentPath.end()) {
                    // Recursive call for DFS
                    currentCost += edgeCost;
                    dfs(nextNode);
                    currentCost -= edgeCost;
                }
            }
        }

        // Backtrack
        currentPath.pop_back();
    };

    // Start DFS from the source node
    dfs(nodeFrom);

    return std::make_pair(bestPath, bestCost);
}