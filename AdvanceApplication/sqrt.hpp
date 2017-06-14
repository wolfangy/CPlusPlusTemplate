#pragma once
template <int N, int LOW = 1, int HIGH=N>
class Sqrt
{
public:
    enum { middle = (LOW + HIGH + 1) / 2 };

    enum
    {
        result = (N < middle * middle) ? 
        Sqrt<N, LOW, middle - 1>::result 
        : Sqrt<N, middle, HIGH>::result
    };
};

template<int N, int M>
class Sqrt<N, M, M>
{
public:
    enum { result = M };
};
