#pragma once
#include "ifthenelse.hpp"

template<int N>
class Value
{
public:
    enum { result = N };
};

template <int N, int I =1>
class Sqrt
{
public:
    typedef typename
        IfThenElse<(I*I < N), Sqrt<N, I + 1>, Value<I>>::ResultT SubT;
    enum { result = SubT::result };
};