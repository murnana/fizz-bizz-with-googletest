#pragma once
#if !defined(__FIZZ_BIZZ__H_)
#define __FIZZ_BIZZ__H_

#include <memory>
#include <string>

class fizz_bizz
{
private:
    /* data */
public:
    fizz_bizz(/* args */);
    ~fizz_bizz();

    const std::string &answer(const int input) const;
};


#endif // __FIZZ_BIZZ__H_
