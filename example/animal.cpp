/**
 * @file animal.cpp
 * @brief class Animal
 * @author 沈煜, shenyu@shenyu.me
 * @version 1.0.0
 * @date 2017-10-17
 */

#include "animal.h"

std::string Animal::getName()
{
    return this->_name;
}

int Animal::getAge()
{
    return this->_age;
}
