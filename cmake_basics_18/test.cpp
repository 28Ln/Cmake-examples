#define BOOST_TEST_MODULE MyTest
#include <boost/test/unit_test.hpp>

int add(int i, int j) {
    return i + j;
}

BOOST_AUTO_TEST_SUITE(test_add_suite)

BOOST_AUTO_TEST_CASE(test_add_case1) {
    BOOST_CHECK(add(2, 3) == 5);
}

BOOST_AUTO_TEST_CASE(test_add_case2) {
    BOOST_CHECK(add(-2, 3) == 11);
}

BOOST_AUTO_TEST_SUITE_END()
