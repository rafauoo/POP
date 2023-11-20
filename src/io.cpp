#include "io.h"

std::map<int, std::vector<std::pair<int, int>>> read_graph(const std::string& file_name) {
    std::ifstream file;
    file.open(file_name);
    std::map<int, std::vector<std::pair<int, int>>> connections;
    int nodeFrom, nodeTo, weight;

    while (file >> nodeFrom >> nodeTo >> weight) {
        connections[nodeFrom].push_back(std::make_pair(nodeTo, weight));
    }

    return connections;
}

void print_graph(const std::map<int, std::vector<std::pair<int, int>>>& connections) {
    for (const auto& entry : connections) {
        std::cout << "Node " << entry.first << " is connected to:\n";
        for (const auto& edge : entry.second) {
            std::cout << "  Node " << edge.first << " with weight " << edge.second << '\n';
        }
        std::cout << '\n';
    }
}

void print_result(const std::pair<std::vector<int>, int>& result) {
    std::cout << "Found path: ";
    for (int node : result.first) {
        std::cout << node << " ";
    }
    std::cout << "\nCost: " << result.second << std::endl;
}

std::pair<std::vector<int>, int> read_expected_output(const std::string& file_name) {
    std::ifstream file;
    file.open(file_name);
    std::vector<int> optimalPath;
    int node;

    while (file >> node) {
        optimalPath.push_back(node);
    }
    int cost = optimalPath.back();
    optimalPath.pop_back();
    return std::make_pair(optimalPath, cost);
}

std::pair<int, int> get_test_data(const std::string& file_name) {
    std::ifstream file;
    file.open(file_name);
    int nodeFrom, nodeTo;
    file >> nodeFrom >> nodeTo;
    return std::make_pair(nodeFrom, nodeTo);
}