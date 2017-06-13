#include <iostream>
//#include "accum1.hpp"
//#include "accum2.hpp"
//#include "accum3.hpp"
//#include "accum4.hpp"
//#include "accum5.hpp"
#include "accum8.hpp"
#include "multpolicy1.hpp"
#include "../AdvanceApplication/rparam.hpp"
#include "../AdvanceApplication/csm1.hpp"
#include "rparamcls.hpp"

template <typename T1, typename T2>
void foo_core(typename RParam<T1>::Type p1, typename RParam<T2>::Type p2)
{
    std::cout << "foo has been called" << std::endl;
}

template <typename T1, typename T2>
void foo(T1 const& p1, T2 const& p2) { foo_core<T1, T2>(p1, p2); }

int main()
{
	int num[] = { 1,2,3,4,5 };

	std::cout << "the average value of the integers is: "
		<< accum(&num[0], &num[5]) / 5
		<< std::endl;

	char name[] = "templates";
	int length = sizeof(name) - 1;

	std::cout << "the average value of the characters in \"" << name << "\" is: "
		<< accum(&name[0], &name[length]) / length
		<< std::endl;

	float fnum[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	std::cout << "the average value of the floats is: "
		<< accum(&fnum[0], &fnum[5]) / 5
		<< std::endl;

	/*auto result = accum<float, MultPolicy>(&fnum[0], &fnum[5]);
	std::cout << "the multiply value is: " << result << std::endl;*/

    MyClass1 mc1;
    MyClass2 mc2;
    MyClass1* mc1p = &mc1;
    foo/*<MyClass1, MyClass2>*/(mc1, mc2);

    MyClass1* tester = new MyClass1();
    ::new (tester) MyClass1(*mc1p);
    std::cout << typeid(tester).name() << std::endl;
    mc1p->increment();

    std::cout << "value from original: " << mc1p->getValue() << std::endl;
    std::cout << "value from placement:" << tester->getValue() << std::endl;

	system("pause");
}