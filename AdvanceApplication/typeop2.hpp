#pragma once
template <typename T>
class TypeOp <T const> {
public:
	typedef T const ArgT;
	typedef T BareT;
	typedef T const ConstT;
	typedef T const & RefT;
	typedef T & RefBareT;
	typedef T const & RefConstT;
};