#pragma once
#include <stddef.h>

template <typename CountedType>
class ObjectCounter
{
private:
    static size_t count;

protected:
    ObjectCounter()
    {
        ++count;
    }

    ObjectCounter(ObjectCounter<CountedType> const&)
    {
        ++count;
    }
    
    ~ObjectCounter()
    {
        --count;
    }

public :
    static size_t live()
    {
        return count;
    }
};

template <typename CountedType>
size_t ObjectCounter<CountedType>::count = 0;