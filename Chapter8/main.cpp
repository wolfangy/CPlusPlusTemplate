#include <iostream>

template <typename T, T nontype_param>
class C {};

int a;

void f() {}
void f(int v) {};

void chapter8_3()
{
	C<int, 33> c1;
}

void main()
{
	chapter8_3();
	system("pause");
}