#include <gtest/gtest.h>
#include <map>
#include <vector>
#include "../src/include/io.h"
#include "../src/include/a_star.h"
#include "../src/include/brut.h"
#include "../src/include/dijkstra.h"

// A_STAR
TEST(A_STAR, EX_1_TEST_1) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_1.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_1.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(A_STAR, EX_1_TEST_2) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_2.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_2.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(A_STAR, EX_1_TEST_3) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_3.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_3.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(A_STAR, EX_1_TEST_4) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_4.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_4.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(A_STAR, EX_1_TEST_5) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_5.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_5.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

// BRUT FORCE
TEST(BRUT, EX_1_TEST_1) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_1.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_1.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(BRUT, EX_1_TEST_2) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_2.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_2.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(BRUT, EX_1_TEST_3) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_3.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_3.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(BRUT, EX_1_TEST_4) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_4.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_4.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(BRUT, EX_1_TEST_5) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_5.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_5.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}


// DIJKSTRA
TEST(DIJKSTRA, EX_1_TEST_1) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_1.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_1.txt");
    std::pair<std::vector<int>, int> output = dijkstra(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(DIJKSTRA, EX_1_TEST_2) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_2.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_2.txt");
    std::pair<std::vector<int>, int> output = dijkstra(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(DIJKSTRA, EX_1_TEST_3) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_3.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_3.txt");
    std::pair<std::vector<int>, int> output = dijkstra(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(DIJKSTRA, EX_1_TEST_4) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_4.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_4.txt");
    std::pair<std::vector<int>, int> output = dijkstra(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(DIJKSTRA, EX_1_TEST_5) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/1/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/1/tests/result_5.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/1/tests/test_5.txt");
    std::pair<std::vector<int>, int> output = dijkstra(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}
