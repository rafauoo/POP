#include <gtest/gtest.h>
#include <map>
#include <vector>
#include "../src/include/io.h"
#include "../src/include/a_star.h"
#include "../src/include/brut.h"
#include "../src/include/dijkstra.h"

// A_STAR
TEST(A_STAR, EX_16_TEST_1) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/16/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/16/tests/result_1.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/16/tests/test_1.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

// BRUT FORCE
TEST(BRUT, EX_16_TEST_1) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/16/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/16/tests/result_1.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/16/tests/test_1.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

// DIJKSTRA
TEST(DIJKSTRA, EX_16_TEST_1) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/16/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/16/tests/result_1.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/16/tests/test_1.txt");
    std::pair<std::vector<int>, int> output = dijkstra(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}