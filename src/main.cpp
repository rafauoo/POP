#include "a_star.h"
#include "brut.h"
#include "io.h"
#include <iostream>

int main () {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    print_graph(connections);
    std::pair<std::vector<int>, int> output = a_star(connections, 3, 5);
    print_result(output);
}