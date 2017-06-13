#pragma once
#include <iostream>

class Empty {
	typedef int Int;
};

class EmptyToo : public Empty {

};

class EmptyThree : public EmptyToo{
};

class NonEmpty : public Empty, public EmptyThree {

};