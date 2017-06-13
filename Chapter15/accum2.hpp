#pragma once

#include "accumtraits2.hpp"

template <typename T>
inline typename AccumulationTraits<T>::AccT accum(T const* begin, T const* end)
{
	typedef typename AccumulationTraits<T>::AccT AccT;

	AccT total = AccT();
	while (begin != end)
	{
		total += *begin;
		begin++;
	}
	return total;
}