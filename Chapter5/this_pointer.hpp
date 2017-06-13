#pragma once
template <typename T>
class Base {
public:
	void bar(){
		std::cout << "Hello from bar from " << typeid(*this).name() << std::endl;
	}
};

template <typename T>
class Derived : public Base<T> {
public :
	void foo() {
		this->bar();
		std::cout << "Hello from foo from " << typeid(*this).name() << std::endl;
	}
};