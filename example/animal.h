/**
 * @file animal.h
 * @brief class Animal
 * @author 沈煜, shenyu@shenyu.me
 * @version 1.0.0
 * @date 2017-10-17
 */

#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <iostream>

class Animal
{
public:
    Animal(const std::string & name, const int & age) : _name(name), _age(age) {}

    std::string getName();

    int getAge();

    virtual std::string saying() = 0;

private:
    std::string _name;
    int _age;
};

#endif
