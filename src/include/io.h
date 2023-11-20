#include <iostream>
#include <vector>
#include <map>
#include <fstream>

std::map<int, std::vector<std::pair<int, int>>> read_graph(const std::string& file_name);
void print_graph(const std::map<int, std::vector<std::pair<int, int>>>& connections);
void print_result(const std::pair<std::vector<int>, int>& result);
std::pair<std::vector<int>, int> read_expected_output(const std::string& file_name);
std::pair<int, int> get_test_data(const std::string& file_name);