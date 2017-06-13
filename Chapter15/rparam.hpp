#pragma once

#include "../AdvanceApplication/ifthenelse.hpp"
#include "../AdvanceApplication/isclasst.hpp"

template<typename T>
class RParam
{
public:
	typedef typename IfThenElse<IsClassT<T>::No, T, T const&>::ResultT Type;
};