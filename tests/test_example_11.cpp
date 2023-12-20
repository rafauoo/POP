#include <gtest/gtest.h>
#include <map>
#include <vector>
#include "../src/include/io.h"
#include "../src/include/a_star.h"
#include "../src/include/brut.h"
#include "../src/include/dijkstra.h"

// A_STAR
TEST(A_STAR, EX_11_TEST_1) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/11/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/11/tests/result_1.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/11/tests/test_1.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(A_STAR, EX_11_TEST_2) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/11/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/11/tests/result_2.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/11/tests/test_2.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(A_STAR, EX_11_TEST_3) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/11/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/11/tests/result_2.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/11/tests/test_2.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

// BRUT FORCE
TEST(BRUT, EX_11_TEST_1) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/11/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/11/tests/result_1.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/11/tests/test_1.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(BRUT, EX_11_TEST_2) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/11/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/11/tests/result_2.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/11/tests/test_2.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(BRUT, EX_11_TEST_3) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/11/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/11/tests/result_3.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/11/tests/test_3.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

// DIJKSTRA
TEST(DIJKSTRA, EX_11_TEST_1) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/11/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/11/tests/result_1.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/11/tests/test_1.txt");
    std::pair<std::vector<int>, int> output = dijkstra(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(DIJKSTRA, EX_11_TEST_2) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/11/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/11/tests/result_2.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/11/tests/test_2.txt");
    std::pair<std::vector<int>, int> output = dijkstra(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(DIJKSTRA, EX_11_TEST_3) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/11/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/11/tests/result_3.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/11/tests/test_3.txt");
    std::pair<std::vector<int>, int> output = dijkstra(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}