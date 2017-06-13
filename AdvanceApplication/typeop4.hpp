#pragma once
#include "typeop1.hpp"

template<>
class TypeOp<void> {
public:
	typedef void ArgT;
	typedef void BareT;
	typedef void const ConstT;
	typedef void RefT;
	typedef void RefBareT;
	typedef void RefConst;
};