#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <limits>

std::pair<std::vector<int>, int> dijkstra(std::map<int, std::vector<std::pair<int, int>>> graph, int nodeFrom, int nodeTo);