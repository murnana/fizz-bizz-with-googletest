#include "./fizz_bizz.hpp"
#include <gtest/gtest.h>

/**
 * @brief 1. シンプルなテスト
 * TDD最初のステップです。まずはこれをクリアしましょう。
 * 
 */
TEST(FizzBizzTest, FirstStep) {
    fizz_bizz tester;
    EXPECT_EQ("1", tester.answer(1));
    EXPECT_EQ("Fizz", tester.answer(3));
    EXPECT_EQ("Buzz", tester.answer(5));
    EXPECT_EQ("FizzBuzz", tester.answer(15));
}
