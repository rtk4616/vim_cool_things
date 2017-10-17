/**
 * @file dog.h
 * @brief class Dog
 * @author 沈煜, shenyu@shenyu.me
 * @version 1.0.0
 * @date 2017-10-17
 */

#ifndef _DOG_H
#define _DOG_H

#include <string>
#include "animal.h"

class Dog : public Animal
{
public:
    Dog(const std::string & name, const int & age) : Animal(name, age) {}

    virtual std::string saying();
};

#endif
