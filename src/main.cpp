#include "./include/a_star.h"
#include "./include/brut.h"
#include "./include/io.h"
#include <iostream>

int main () {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/8/data.txt");
    //print_graph(connections);
    std::pair<std::vector<int>, int> output = a_star(connections, 1,200);
    print_result(output);
    measure_time(1000, "result.txt");
}