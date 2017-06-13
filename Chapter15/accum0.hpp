#pragma once
#include <iterator>

template <typename Iter>
inline typename std::iterator_traits<Iter>::value_type accum(Iter start, Iter end)
{
	typedef typename std::iterator_traits<Iter>::value_type VT;

	VT total = VT();
	while (start != end)
	{
		total += *start;
		++start;
	}

	return total;
}