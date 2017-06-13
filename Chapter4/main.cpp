#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <iterator>

#include "stack4.hpp"
#include "addval.hpp"

void chapter4_1()
{
	Stack<int, 20> int20Stack;
	Stack<int, 40> int40Stack;
	Stack<std::string, 40> stringStack;

	int20Stack.push(7);
	std::cout << int20Stack.top() << std::endl;
	int20Stack.pop();

	stringStack.push("hello");
	std::cout << stringStack.top() << std::endl;
	stringStack.pop();
	stringStack.pop();

}

void chapter4_2() {
	std::vector<int> toBeAdd{ 1,2,3,4,5,6,7,8,9 };
	std::vector<int> addResult(toBeAdd.size());
	std::transform(toBeAdd.begin(), toBeAdd.end(), addResult.begin(), add_value<int, 5>);

	std::copy(addResult.begin(), addResult.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}

template<char const* NAME>
class MyClass{
public:
	void print() {
		std::cout << "I have a name: " << NAME << std::endl;
	}
};

extern char const external_name[] = "Hello Boy";

void chapter4_3()
{
	MyClass<external_name> x;
	x.print();
}

int main()
{
	try
	{
		chapter4_3();

		system("pause");
	}
	catch (std::exception const& ex) {
		std::cerr << "Exception: " << ex.what() << std::endl;
		system("pause");
		return EXIT_FAILURE;
	}
}