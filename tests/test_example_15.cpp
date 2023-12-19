#include <gtest/gtest.h>
#include <map>
#include <vector>
#include "../src/include/io.h"
#include "../src/include/a_star.h"
#include "../src/include/brut.h"

// A_STAR
TEST(A_STAR, EX_15_TEST_1) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/15/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/15/tests/result_1.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/15/tests/test_1.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

// BRUT FORCE
TEST(BRUT, EX_15_TEST_1) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/15/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/15/tests/result_1.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/15/tests/test_1.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}