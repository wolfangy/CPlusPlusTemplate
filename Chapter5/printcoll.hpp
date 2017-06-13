#pragma once
template <typename T>
void printcoll(T const& coll)
{
	typename T::const_iterator pos;
	typename T::const_iterator end(coll.end());

	for (pos = coll.begin(); pos != end; ++pos)
	{
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

template<int N>
void printBitset(std::bitset<N> const& bs)
{
	std::cout << bs.template to_string<char, std::char_traits<char>, std::allocator<char>>() << std::endl;
}