#include <iostream>

template<typename T>
class C {
public:
	C(int);
};

void candidate(C<double> const&);
void candidate(int) {}

void chapter10_1()
{
	candidate(42);
}

template <typename T>
class Safe {};

template <int N>
class Danger {
public:
	typedef char Block[N];
};

template <typename T, int N>
class Tricky {
public:
	virtual ~Tricky() {}

	void no_body_here(Safe<T> = 3);
	void inclass() {
		Dager<N> no_boom_yet;
	}
	void error() { Danger<0> boom; }
	void unsafe(T(*p)[N]);
	T operator->();
	//virtual Safe<T> suspect();
	struct Nested {
		Danger<N> pfew;
	};
	union {
		int align;
		Safe<T> anonymous;
	};
};

void chapter10_2()
{
	Tricky<int, 0> ok;
	system("pause");
}
int main()
{
	chapter10_2();
}