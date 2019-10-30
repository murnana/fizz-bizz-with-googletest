#include "./fizz_bizz.hpp"
#include <gtest/gtest.h>

TEST(FizzBizzTest, Simple) {
    fizz_bizz tester;
    ASSERT_EQ("1", tester.answer(1));
    ASSERT_EQ("Fizz", tester.answer(3));
    ASSERT_EQ("Buzz", tester.answer(5));
    ASSERT_EQ("FizzBuzz", tester.answer(15));
}
