#pragma once
#include <iostream>

class DefaultPolicy1 {
public:
	static void Listen()
	{
		std::cout << "I'am listening" << std::endl;
	}
};

class DefaultPolicy2 {
public:
	static void speak()
	{
		std::cout << "I'am speaking" << std::endl;
	}
};

class DefaultPolicy3 {
public:
	static void read()
	{
		std::cout << "I'am reading" << std::endl;
	}
};

class DefaultPolicy4 {
public:
	static void write()
	{
		std::cout << "I'am writing" << std::endl;
	}
};

class DefaultPolicies 
{
public:
	typedef DefaultPolicy1 P1;
	typedef DefaultPolicy2 P2;
	typedef DefaultPolicy3 P3;
	typedef DefaultPolicy4 P4;
};

class DefaultPolicyArgs : virtual public DefaultPolicies
{
};

template <typename Policy>
class Policy1_is : virtual public DefaultPolicies {
public: 
	typedef Policy P1;
};

template <typename Policy>
class Policy2_is : virtual public DefaultPolicies {
public:
	typedef Policy P2;
};

template <typename Policy>
class Policy3_is : virtual public DefaultPolicies {
public:
	typedef Policy P3;
};

template <typename Policy>
class Policy4_is : virtual public DefaultPolicies {
public:
	typedef Policy P4;
};