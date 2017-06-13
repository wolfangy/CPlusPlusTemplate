#pragma once
template<typename T1, typename T2>
class Promotion {
public:
    typedef typename IfThenElse<(sizeof(T1) > sizeof(T2)),
        T1,
        typename IfThenElse<(sizeof(T1) < sizeof(T2)),
        T2,
        void>::ResultT>::ResultT  ResultT;
};

template<typename T>
class Promotion<T, T> {
public:
	typedef T ResultT;
};

template<typename T1, typename T2>
class Promotion<Array<T1>, Array<T2>>
{
public:
    typedef Array<typename Promotion<T1, T2>::ResultT> ResultT;
};

template<typename T>
class Promotion<Array<T>, Array<T>>
{
public:
    typedef Array<typename Promotion<T, T>::Result> ResultT;
};

#define MK_PROMOTION(T1, T2, Tr)			\
template<> class Promotion<T1, T2> {		\
public:										\
	typedef Tr ResultT;						\
};											\
											\
template<> class Promotion<T2, T1> {		\
public:										\
	typedef Tr ResultT;						\
};

MK_PROMOTION(bool, char, int)
MK_PROMOTION(bool, unsigned char, int)
MK_PROMOTION(bool, signed char, int)