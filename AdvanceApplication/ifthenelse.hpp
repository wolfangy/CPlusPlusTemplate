#pragma once

template<bool CONDITION, typename TTrue, typename TFalse>
class IfThenElse;

template<typename TTrue, typename TFalse>
class IfThenElse<true, TTrue, TFalse> {
public:
	typedef TTrue ResultT;
};

template<typename TTrue, typename TFalse>
class IfThenElse<false, TTrue, TFalse>{
public:
	typedef TFalse ResultT;
};