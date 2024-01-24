#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <chrono>
enum AlgorithmType {
    BrutForce = 0,
    Dijkstra = 1,
    A_Star = 2,
};

std::map<int, std::vector<std::pair<int, int>>> read_graph(const std::string& file_name);
void print_graph(const std::map<int, std::vector<std::pair<int, int>>>& connections);
void print_result(const std::pair<std::vector<int>, int>& result);
std::pair<std::vector<int>, int> read_expected_output(const std::string& file_name);
std::pair<int, int> get_test_data(const std::string& file_name);
void measure_time(int n, AlgorithmType alg, int start, int end, std::string input, std::string output);