#pragma once
#include "ifthenelse.hpp"

template <int N, int LOW=1, int HIGH=N>
class Sqrt
{
public:
    enum { mid = (LOW + HIGH + 1) / 2 };
    typedef typename 
    IfThenElse<(N < mid * mid), Sqrt<N, LOW, mid - 1>, Sqrt<N, mid, HIGH>>::ResultT SubT;

    enum { result = SubT::result };
};

template<int N, int S>
class Sqrt<N, S, S>
{
public:
    enum { result = S };
};