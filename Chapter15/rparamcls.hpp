#pragma once

#include <iostream>
#include "../AdvanceApplication/rparam.hpp"

class MyClass1
{
private:
    int _value{ 0 };
public:
    MyClass1(){}

    MyClass1(MyClass1 const&)
    {
        std::cout << "MyClass1 copy constructor called." << std::endl;
    }

    void increment() { _value++; }
    int getValue() const { return _value; }
};

class MyClass2
{
public:
    MyClass2(){}

    MyClass2(MyClass2 const&)
    {
        std::cout << "MyClass2 copy constructor called." << std::endl;
    }
};

template<>
class RParam<MyClass2>
{
public:
    typedef MyClass2 Type;
};