#pragma once

#include "accumtraits4.hpp"
#include "sumpolicy1.hpp"

template <typename T, typename Policy = SumPolicy, typename Traits = AccumulationTraits<T>>
class Accum {
public:
	typedef typename Traits::AccT AccT;

	static AccT accum(T const* begin, T const* end)
	{
		AccT total = Traits::zero();
		while (begin != end)
		{
			Policy::accumulate(total, *begin);
			++begin;
		}

		return total;
	}
};

template<typename T, typename Policy = SumPolicy, typename Traits = AccumulationTraits<T>>
inline typename Traits::AccT accum(T const * begin, T const * end)
{
	return Accum<T, Policy, Traits>::accum(begin, end);
}