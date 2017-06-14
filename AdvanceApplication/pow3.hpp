#pragma once
template <int N>
class Pow3
{
public:
    enum { result = 3 * Pow3<N - 1>::result };
};

template <>
class Pow3<0>
{
public:
    enum { result = 1 };
};