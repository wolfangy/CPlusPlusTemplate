#include "bread_slicer.hpp"
#include "empty.hpp"
#include "../AdvanceApplication/objectcounter.hpp"

class CustomPolicy1
{
public:
	static void listen()
	{
		std::cout << "I'm listending by using a bug in the wall." << std::endl;
	}
};

class CustomPolicy3
{
public:
    static void read()
    {
        std::cout << "I am reading a book with no word." << std::endl;
    }

};

template <typename CharT>
class MyString : public ObjectCounter<MyString<CharT>>{};

void Chapter16_1()
{
	BreadSlicer<Policy1_is<CustomPolicy1>> bs;
	bs.doListening();
	bs.doSpeaking();
	bs.doReading();
	bs.doWriting();

    BreadSlicer<Policy3_is<CustomPolicy3>> bs2;
    bs2.doListening();
    bs2.doSpeaking();
    bs2.doReading();
    bs2.doWriting();
}

void Chapter16_2()
{
	std::cout << "sizeof (Empty): " << sizeof(Empty) << std::endl;
	std::cout << "sizeof (EmptyToo): " << sizeof(EmptyToo) << std::endl;
	std::cout << "sizeof (EmptyThree): " << sizeof(EmptyThree) << std::endl;
	std::cout << "sizeof (NonEmpty): " << sizeof(NonEmpty) << std::endl;
}

void Chapter16_3()
{
    MyString<char> s1, s2;
    MyString<wchar_t> ws;
    std::cout << "number of MyString<char>: " << MyString<char>::live() << std::endl;
    std::cout << "number of MyString<wchar_t>: " << ws.live() << std::endl;
}

int main()
{
    Chapter16_1();
	Chapter16_2();
    Chapter16_3();

	system("pause");
}