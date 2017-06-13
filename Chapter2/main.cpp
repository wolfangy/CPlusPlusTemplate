#include<iostream>
#include<string>

#include "max.hpp"

using namespace std;

int g_n1 = 42;
int g_n2 = 53;

void func_ptr(int* pp)
{
	cout << "type of parameter: " << typeid(pp).name() << endl;
	pp = &g_n1;
}

void func_ptr_ptr(int** pp)
{
	cout << "type of parameter: " << typeid(pp).name() << endl;
	*pp = &g_n1;
}

void func_ref_ptr(int* & pr)
{
	cout << "type of parameter: " << typeid(pr).name() << endl;
	pr = &g_n2;
}

void example_ptr()
{
	int n = 23;
	int* pn = &n;

	std::cout << "example_ptr()" << std::endl;

	std::cout << "Before :" << *pn << std::endl; // display 23

	func_ptr(pn);

	std::cout << "After :" << *pn << std::endl; // display 23

	func_ptr_ptr(&pn);

	std::cout << "After Ptr-to-ptr:" << *pn << std::endl; // display 42

	func_ref_ptr(pn);

	std::cout << "After ref-to-ptr:" << *pn << std::endl; // display 53
}

void chapter2_1()
{
	int i{ 42 };

	cout << "max (int): " << chapter2::max(7, i) << endl << endl;;

	double f1 = 3.4;
	double f2 = -6.7;
	cout << "max (double): " << chapter2::max(f1, f2) << endl << endl;;

	string s1 = "mathematics";
	string s2 = "math";

	cout << "max (string): " << chapter2::max(s1, s2) << endl << endl;;
}

void chapter2_2()
{
	chapter2::max(7, 42, 68);
	cout << endl;

	chapter2::max(7.0, 42.0);
	cout << endl;

	chapter2::max('a', 'b');
	cout << endl;

	chapter2::max(7, 42);
	cout << endl;

	chapter2::max<>(7, 42);
	cout << endl;

	chapter2::max<double>(7, 42);
	cout << endl;

	chapter2::max('a', 42.7);
	cout << endl;

	chapter2::max<int>('a', 42.7);
	cout << endl;
}


void chapter2_3()
{
	int a = 7;
	int b = 42;
	int* p1 = &a;
	int* p2 = &b;

	chapter2::max(p1, p2);
	cout << endl;

	char const* ss1 = "David";
	char const* ss2 = "Nico";
	char const* ss3 = "Lucas";

	auto ssr1 = chapter2::max(ss1, ss2);
	cout << endl;

	auto ssr2 = chapter2::max(ss1, ss2, ss3);
}


int main()
{
	example_ptr();
	system("pause");
}