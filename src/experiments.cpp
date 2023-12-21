#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <chrono>
#include <filesystem>
#include "./include/brut.h"
#include "./include/a_star.h"
#include "./include/io.h"
#include "./include/dijkstra.h"

void measure_time(int n, const std::string& filename) {
    std::ofstream outputFile;
    outputFile.open("./result.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Cannot open output file" << std::endl;
    }

    std::map<int, std::vector<std::pair<int, int>>> connections = read_graph("../../examples/18/data.txt");
    long double totalDuration = 0;

    for (int i = 0; i < n; ++i) {
        auto start = std::chrono::high_resolution_clock::now();
        dijkstra(connections, 1, 50);
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

        totalDuration += duration.count();
        outputFile << duration.count() << std::endl;
    }

    outputFile.close();

    if (n > 0) {
        long double averageDuration = totalDuration / n;
        std::cout << "Average duration: " << averageDuration << " microseconds" << std::endl;
    }
}
