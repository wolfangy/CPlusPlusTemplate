#pragma once
template <int N, int I= 1>
class Sqrt
{
public:
    enum { result = (I * I < N) ? Sqrt<N, I + 1>::result : I };
};

template<int N>
class Sqrt<N, N>
{
public:
    enum { result = N };
};