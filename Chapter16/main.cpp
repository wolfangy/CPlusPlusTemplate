#include "bread_slicer.hpp"
#include "empty.hpp"

class CustomPolicy1
{
public:
	static void listen()
	{
		std::cout << "I'm listending by using a bug in the wall." << std::endl;
	}
};

void chapter16_1()
{
	BreadSlicer<Policy1_is<CustomPolicy1>> bs;
	bs.doListening();
	bs.doSpeaking();
	bs.doReading();
	bs.doWriting();
}

void Chapter16_2()
{
	std::cout << "sizeof (Empty): " << sizeof(Empty) << std::endl;
	std::cout << "sizeof (EmptyToo): " << sizeof(EmptyToo) << std::endl;
	std::cout << "sizeof (EmptyThree): " << sizeof(EmptyThree) << std::endl;
	std::cout << "sizeof (NonEmpty): " << sizeof(NonEmpty) << std::endl;
}

int main()
{
	//Chapter16_1();
	Chapter16_2();

	system("pause");
}