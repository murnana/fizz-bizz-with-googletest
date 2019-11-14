#pragma once
#if !defined(__FIZZ_BIZZ__H_)
#define __FIZZ_BIZZ__H_

#include <memory>
#include <string>

/**
 * @brief Fizz bizz checker
 * 
 */
class fizz_bizz
{
public:
    fizz_bizz();
    ~fizz_bizz();

    /**
     * @brief 数値に対して答えを書き出します
     * 
     * @param input number of test
     * @return const std::string& 
     */
    template <typename T>
    const std::string answer(const T &input) const {
        // 3でも5でも割り切れる時、「FizzBizz」と答える
        if ((input % 15) == 0) {
            return "FizzBuzz";
        }

        // 3で割り切れる時、「Fizz」と答える
        if ((input % 3) == 0) {
            return "Fizz";
        }

        // 5で割り切れる時、「Buzz」と答える
        if ((input % 5) == 0) {
            return "Buzz";
        }

        // それ以外の時は文字列にして答える
        return std::to_string(input);
    }
};


#endif // __FIZZ_BIZZ__H_
