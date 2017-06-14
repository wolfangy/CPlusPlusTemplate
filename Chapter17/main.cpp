#include <iostream>
#include "../AdvanceApplication/pow3.hpp"
//#include "../AdvanceApplication/sqrt.hpp"
//#include "../AdvanceApplication/sqrt2.hpp"
//#include "../AdvanceApplication/sqrt3.hpp"
#include "../AdvanceApplication/sqrt4.hpp"
#include "../AdvanceApplication/loop2.hpp"

template <int p, int i>
class is_prime
{
public:
    enum { prim = (p == 2) || (p % i) && is_prime<(i > 2 ? p : 0), i - 1>::prim };
};

template<>
class is_prime<0,0>
{
public:
    enum { prim = 1 };
};

template<>
class is_prime<0,1>
{
public:
    enum { prim = 1 };
};

template<int i>
class D
{
public:
    D(void*);
};

template<int i>
class Prime_print
{
public:
    Prime_print<i - 1> a;
    enum { prim = is_prime<i, i - 1>::prim };
    void f()
    {
        D<i> d = prim ? 1 : 0;
        a.f();
    }
};

template<>
class Prime_print<1>
{
public:
    enum { prim = 0 };
    void f()
    {
        D<1> d = prim ? 1 : 0;
    }
};

#ifndef LAST
#define LAST 18
#endif

int main()
{
    std::cout << "Pow3<7>::result= " << Pow3<7>::result << std::endl;

    std::cout << "Sqrt<16>::result= " << Sqrt<16>::result << std::endl;
    std::cout << "Sqrt<25>::result= " << Sqrt<25>::result << std::endl;
    std::cout << "Sqrt<42>::result= " << Sqrt<42>::result << std::endl;
    std::cout << "Sqrt<1>::result= " << Sqrt<1>::result << std::endl;

    int a[3] = { 1,2,3 };
    int b[3] = { 4,5,6 };
    std::cout << "dot product two 3x1 vector (a, b) = " << dot_product<3>(a, b) << std::endl;

    Prime_print<LAST> pp;
    //pp.f();

    system("pause");
}