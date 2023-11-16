#include <iostream>
#include <vector>

/// @brief a* algorith for path finding in graph
/// @param graph vector of connections from that nodes (pair: node, weight)
/// @return pair: vector of nodes that are the shortest path, weight of that path
std::pair<std::vector<int>, int> a_star(std::vector<std::vector<std::pair<int,int> > >);