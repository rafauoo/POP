#include "./include/a_star.h"
#include "./include/brut.h"
#include "./include/dijkstra.h"
#include "./include/io.h"
#include <iostream>

int main () {
    //std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/10/data.txt");
    //print_graph(connections);
    //std::pair<std::vector<int>, int> output = dijkstra(connections, 1, 48);
    //print_result(output);
    measure_time(100000, "result.txt");
}

