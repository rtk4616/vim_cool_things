/**
 * @file main.cpp
 * @brief main
 * @author 沈煜, shenyu@shenyu.me
 * @version 1.0.0
 * @date 2017-10-17
 */

#include <iostream>
#include "dog.h"

int main()
{
    Dog dog("Tom", 9);
    std::cout << dog.saying() << std::endl;
    std::cout << dog.getName() << std::endl;
    std::cout << dog.getAge() << std::endl;

    return 0;
}
