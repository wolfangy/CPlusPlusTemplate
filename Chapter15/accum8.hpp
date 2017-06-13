#pragma once

#include "accumtraits4.hpp"
#include "sumpolicy2.hpp"

template<typename T, 
	template<typename, typename> class Policy = SumPolicy,
	typename Traits = AccumulationTraits<T>>
class Accum {
public:
	typedef typename Traits::AccT AccT;

	static AccT accm(T const* begin, T const* end)
	{
		AccT total = Traits::zero();
		while (begin != end)
		{
			Policy<AccT, T>::accumulate(total, *begin);
			begin++;
		}

		return total;
	}
};

template<typename T,
		 template<typename, typename> class Policy = SumPolicy,
		 typename Traits = AccumulationTraits<T>>
inline typename Traits::AccT accum(T const* begin, T const* end)
{
	return Accum<T, Policy, Traits>::accm(begin, end);
}