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

void measure_time(int n, AlgorithmType alg, int source, int finish, const std::string input, const std::string output) {
    std::ofstream outputFile;
    outputFile.open(output);
    if (!outputFile.is_open()) {
        std::cerr << "Cannot open output file" << std::endl;
    }

    std::map<int, std::vector<std::pair<int, int>>> connections = read_graph(input);
    long double totalDuration = 0;
    std::cout << "Graph initialized\n";
    for (int i = 0; i < n; ++i) {
        auto start = std::chrono::high_resolution_clock::now();
        auto end = std::chrono::high_resolution_clock::now();
        if (alg == AlgorithmType::Dijkstra) {
            start = std::chrono::high_resolution_clock::now();
            dijkstra(connections, source, finish);
            end = std::chrono::high_resolution_clock::now();
        }
        if (alg == AlgorithmType::A_Star) {
            start = std::chrono::high_resolution_clock::now();
            a_star(connections, source, finish);
            end = std::chrono::high_resolution_clock::now();
        }
        if (alg == AlgorithmType::BrutForce) {
            start = std::chrono::high_resolution_clock::now();
            brut(connections, source, finish);
            end = std::chrono::high_resolution_clock::now();
        }
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
