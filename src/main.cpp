#include "./include/a_star.h"
#include "./include/brut.h"
#include "./include/dijkstra.h"
#include "./include/io.h"
#include <iostream>
#include <random>
#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <random>

void find_good_test(std::map<int, std::vector<std::pair<int, int> > > connections)
{
    int edges=10000;

    for (int i = 1; i<=edges;i++) {
        for (int j = i; j <= edges; j+=(73+i/12)) {
            std::pair<std::vector<int>, int> output = a_star(connections, i, j);
            if (output.second != -1 && output.first.size() > 20){
                //results.push_back(std::make_pair(output.second, std::make_pair(i, j)));
                std::cout << i << " " << j << " " << output.second << std::endl;}
        //std::cout << "Epoch " << i << " of " << edges << std::endl;
        }
    }

}

int main () {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/28/data.txt");
    //print_graph(connections);

    //find_good_test(connections);
    std::pair<std::vector<int>, int> output = dijkstra(connections, 3725, 6169);
    print_result(output);
    //measure_time(10, AlgorithmType::Dijkstra, 4803, 523, "../../examples/27/data.txt", "result.txt");
}

