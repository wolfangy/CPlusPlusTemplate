#pragma once
#include <iostream>

namespace chapter2
{
	template <typename T>
	inline T const& max(T const& a, T const& b)
	{
		std::cout << "<<2-single type-parameter template>>: (" << a << ", " << b << ")" << std::endl;
		return a < b ? b : a;
	}

	template <typename T1, typename T2>
	inline T1 max(T1 const& a, T2 const& b)
	{
		std::cout << "<2-<double type-parameter template>>: (" << a << ", " << b << ")" << std::endl;
		return a < b ? b : a;
	}

	template <typename RT, typename T1, typename T2>
	inline RT max(T1 const& a, T2 const& b)
	{
		std::cout << "<<2-three type-parameter template>>: (" << a << ", " << b << ")" << std::endl;
		return (RT)(a < b ? b : a);
	}

	inline int const& max(int const& a, int const& b)
	{
		std::cout << "<<2-int>>: (" << a << ", " << b << ")" << std::endl;
		return a < b ? b : a;
	}

	template <typename T>
	inline T* const& max(T* const& a, T* const& b)
	{
		std::cout << "<<2-single pointer type-parameter template>>: (" << a << ", " << b << ")" << std::endl;
		return *a < *b ? b : a;
	}

	inline char const* /*const&*/ max(char const* /*const&*/ a, char const* /*const&*/ b)
	{
		std::cout << "<<2-c string>>: (" << a << ", " << b << ")" << std::endl;
		return std::strcmp(a, b) < 0 ? b : a;
	}

	template <typename T>
	inline T const& max(T const& a, T const& b, T const& c)
	{
		std::cout << "<<3-single type-parameter template>>" << std::endl;
		return max(max(a, b), c);
	}
}