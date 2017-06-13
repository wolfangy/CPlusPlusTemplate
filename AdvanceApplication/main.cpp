#include<iostream>

#include "apply1.hpp"

void incr(int& a) { ++a; }
void print(int a) { std::cout << a << std::endl; }

int main()
{
	int x = 7;
	apply(x, print);
	apply(x, incr);
	apply(x, print);

	system("pause");
}