#include <iostream>
#include <string>
#include <cstdlib>
#include <deque>
//#include "stack2.hpp"
#include "stack3.hpp"

void chapter3_1()
{

	Stack<int> intStack;
	Stack<std::string> stringStack;

	intStack.push(7);
	std::cout << intStack.top() << std::endl;

	stringStack.push("hello");
	std::cout << stringStack.top() << std::endl;

	stringStack.pop();
	stringStack.pop();
}

void chapter3_3()
{
	Stack<int> intStack;

	Stack<double,std::deque<double>> dblStack;

	intStack.push(7);
	std::cout << intStack.top() << std::endl;
	intStack.pop();

	dblStack.push(42.43);
	std::cout << dblStack.top() << std::endl;
	dblStack.pop();
	dblStack.pop();

}

int main()
{
	try
	{
		chapter3_3();
		system("pause");
	}
	catch (std::exception const& ex)
	{
		std::cerr << "Exception: " << ex.what() << std::endl;
		system("pause");
		return EXIT_FAILURE;
	}
}