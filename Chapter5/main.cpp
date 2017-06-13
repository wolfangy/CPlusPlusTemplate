#include <iostream>
#include <vector>
#include <bitset>
#include <string>
#include <memory>

#include "printcoll.hpp"
#include "this_pointer.hpp"
//#include "stack5.hpp"
#include "stack8.hpp"

int time = 0;
long fab(int term, long sum = 0, long prev = 1)
{
	time++;

	if (term == 0) return prev;
	if (term == 1) return sum;

	return fab(term-1, sum + prev, sum);
}

void chapter5_1()
{
	std::vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
	printcoll(v);
	std::bitset<16> a{ 0xAAAA };
	printBitset(a);
}

void chapter5_2()
{
	Base<std::string> base;
	base.bar();

	Derived<int> derivedStr;
	derivedStr.foo();
}

void chapter5_3()
{
	Stack<int> intStack;
	intStack.push(1);
	intStack.push(2);
	intStack.push(3);
	intStack.push(4);
	intStack.push(5);
	intStack.push(6);
	Stack<float> floatStack;

	floatStack = intStack;
}

void chapter5_4() {
	try
	{
		Stack<int> intStack;
		Stack<float> floatStack;

		intStack.push(42);
		intStack.push(7);

		floatStack.push(7.7);

		floatStack = intStack;

		std::cout << floatStack.top() << std::endl;
		floatStack.pop();

		std::cout << floatStack.top() << std::endl;
		floatStack.pop();

		std::cout << floatStack.top() << std::endl;
		floatStack.pop();
	}
	catch(std::exception const& ex)
	{
		std::cerr << "Exception: " << ex.what() << std::endl;
	}

	Stack<int, std::vector> vStack;
	vStack.push(42);
	vStack.push(7);

	std::cout << vStack.top() << std::endl;
	vStack.pop();
}

void main()
{
	/*auto num = fab(4);
	std::cout << time << ": " << num << std::endl;*/

	chapter5_4();
	system("pause");
}