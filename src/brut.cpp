#include "./include/brut.h"
#include <map>
#include <vector>
#include <climits>
#include <functional>
#include <algorithm>
#include "io.cpp"

std::pair<std::vector<int>, int> brut(
    std::map<int, std::vector<std::pair<int, int>>> graph,
    int nodeFrom,
    int nodeTo
) {
    std::vector<int> currentPath;
    std::vector<int> bestPath;
    int currentCost = 0;
    int bestCost = INT_MAX;

    std::function<void(int)> dfs = [&](int currentNode) {
        currentPath.push_back(currentNode);

        if (currentNode == nodeTo) {
            if (currentCost < bestCost) {
                bestPath = currentPath;
                bestCost = currentCost;
            }
        } else {
            for (const auto& neighbor : graph[currentNode]) {
                int nextNode = neighbor.first;
                int edgeCost = neighbor.second;

                if (std::find(currentPath.begin(), currentPath.end(), nextNode) == currentPath.end()) {
                    currentCost += edgeCost;
                    dfs(nextNode);
                    currentCost -= edgeCost;
                }
            }
        }

        currentPath.pop_back();
    };

    dfs(nodeFrom);
    return std::make_pair(bestPath, bestCost);
}
