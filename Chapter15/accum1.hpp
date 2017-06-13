#pragma once

template <typename T>
inline T accum(T const* begin, T const* end)
{
	T total = T();
	while (begin != end)
	{
		total += *begin;
		++begin;
	}

	return total;
}