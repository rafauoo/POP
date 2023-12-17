#include <gtest/gtest.h>
#include <map>
#include <vector>
#include "../src/include/io.h"
#include "../src/include/a_star.h"
#include "../src/include/brut.h"

// A_STAR
TEST(A_STAR, EX_12_TEST_1) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/12/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/12/tests/result_1.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/12/tests/test_1.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(A_STAR, EX_12_TEST_2) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/12/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/12/tests/result_2.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/12/tests/test_2.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(A_STAR, EX_12_TEST_3) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/12/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/12/tests/result_3.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/12/tests/test_3.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(A_STAR, EX_12_TEST_4) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/12/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/12/tests/result_4.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/12/tests/test_4.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(A_STAR, EX_12_TEST_5) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/12/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/12/tests/result_5.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/12/tests/test_5.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(A_STAR, EX_12_TEST_6) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/12/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/12/tests/result_6.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/12/tests/test_6.txt");
    std::pair<std::vector<int>, int> output = a_star(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

// BRUT FORCE
TEST(BRUT, EX_12_TEST_1) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/12/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/12/tests/result_1.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/12/tests/test_1.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(BRUT, EX_12_TEST_2) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/12/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/12/tests/result_2.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/12/tests/test_2.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(BRUT, EX_12_TEST_3) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/12/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/12/tests/result_3.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/12/tests/test_3.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(BRUT, EX_12_TEST_4) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/12/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/12/tests/result_4.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/12/tests/test_4.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(BRUT, EX_12_TEST_5) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/12/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/12/tests/result_5.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/12/tests/test_5.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}

TEST(BRUT, EX_12_TEST_6) {
    std::map<int, std::vector<std::pair<int, int> > > connections = read_graph("../../examples/12/data.txt");
    std::pair<std::vector<int>, int> expected = read_expected_output("../../examples/12/tests/result_6.txt");
    std::pair<int, int> test_data = get_test_data("../../examples/12/tests/test_6.txt");
    std::pair<std::vector<int>, int> output = brut(connections, test_data.first, test_data.second);
    ASSERT_EQ(output.first, expected.first);
    ASSERT_EQ(output.second, expected.second);
}