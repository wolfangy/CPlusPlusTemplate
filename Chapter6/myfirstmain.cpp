#include <iostream>
#include <string>

//#include "myfirst_inst.cpp"
//#include "stack.hpp"
#include "myfirst3.hpp"
#include "stackdef.hpp"
#include "shallow_init.hpp"

void chapter6_6()
{
	using namespace shallow;

	Client main_client;

	shell(main_client);

}

int main()
{
	Stack<int> intStack;
	intStack.push(42);
	std::cout << intStack.top() << std::endl;

	double ice = 3.0;
	print_typeof(ice);

	std::string str{ "hello" };
	print_typeof(str);

	chapter6_6();

	system("pause");
}
