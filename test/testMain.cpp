#define BOOST_TEST_MAIN
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE testMain
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE( testMain ) {
    BOOST_CHECK_EQUAL(1, 1);
}
