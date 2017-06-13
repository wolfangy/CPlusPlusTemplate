#pragma once
#include "typeop1.hpp"

template <typename T>
class TypeOp<T&> {
public:
	typedef T & ArgT;
	typedef typename TypeOp<T>::BareT BareT;
	typedef T const ConstT;
	typedef T & RefT;
	typedef typename TypeOp<T>::BareT& RefBareT;
	typedef T const & RefConstT;
};