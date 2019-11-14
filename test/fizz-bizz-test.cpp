#include "./fizz_bizz.hpp"
#include <gtest/gtest.h>
#include <array>
#include <algorithm>

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

/**
 * @brief 2. 1~100までの数のテスト
 * 
 */
TEST(FizzBizzTest, Ranged100) {
    for (int i = 1; i < 100; i++)
    {
        fizz_bizz tester;
        if((i % 15) == 0) {
            EXPECT_EQ("FizzBuzz", tester.answer(i));
            continue;
        }

        if((i % 3) == 0) {
            EXPECT_EQ("Fizz", tester.answer(i));
            continue;
        }

        if((i % 5) == 0) {
            EXPECT_EQ("Buzz", tester.answer(i));
            continue;
        }

        const auto answer = std::to_string(i);
        EXPECT_EQ(answer, tester.answer(i));
    }
}
