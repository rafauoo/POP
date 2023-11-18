#include <iostream>
#include <vector>
#include <map>

/// @brief a* algorith for path finding in graph
/// @param graph map of connections from that nodes (pair: node, weight)
/// @param nodeFrom source node
/// @param nodeTo destination node
/// @return pair: vector of nodes that are the shortest path, weight of that path
std::pair<std::vector<int>, int> a_star(std::map<int, std::vector<std::pair<int,int> > > graph, int nodeFrom, int nodeTo);