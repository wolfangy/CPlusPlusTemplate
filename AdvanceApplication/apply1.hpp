#pragma once
template <typename T>
void apply(T& arg, void(*func) (T))
{
	func(arg);
}

template <typename T>
void apply(T& arg, void(*func) (T&))
{
	func(arg);
}