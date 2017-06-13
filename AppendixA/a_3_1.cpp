#include <typeinfo>
#include <iostream>

//#define DYNAMIC

class Decider {
#if defined(DYNAMIC)
	virtual ~Decider() {}
#endif
};

extern Decider d;

//int main()
//{
//	const char* name = typeid(d).name();
//
//	std::cout << "name: " << name << " size: " << (int)sizeof(d) << std::endl;
//
//	system("pause");
//
//	return 0;
//}