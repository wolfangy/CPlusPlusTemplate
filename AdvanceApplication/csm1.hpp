#pragma once
#include <new>
#include <cassert>
#include <stddef.h>
#include "rparam.hpp"

template<typename T, bool Bitwise>
class BitOrClassCSM;

template<typename T>
class BitOrClassCSM<T, false>
{
public:
    static void copy(typename RParam<T>::Type src, T* dst)
    {
        *dst = src;
    }

    static void copy_n(T const* src, T* dst, size_t n)
    {
        for(size_t k = 0; k<n; ++k)
        {
            dst[k] = src[k];
        }
    }

    static void copy_init(typename RParam<T>::Type src, void* dst)
    {
        ::new (dst) T(src);
    }

    static void copy_init_n (T const* src, void* dst, size_t n)
    {
        for(size_t k = 0; k < n; ++k)
        {
            ::new ((void*)((char*)(dst) + k)) T(src[k]);
        }
    }

    static void swap(T* a, T* b)
    {
        T tmp(*a);
        *a = *b;
        *b = tmp;
    }

    static void swap_n(T* a, T* b, size_t n)
    {
        for(size_t k = 0; k < n; ++k)
        {
            T tmp(a[k]);
            a[k] = b[k];
            b[k] = tmp;
        }
    }

    static void move(T* src, T* dst)
    {
        asset(src != dst);

        *dst = *src;
        src->~T();
    }

    static void move_n(T* src, T* dst, size_t n)
    {
        assert(src != dst);

        for(size_t k = 0; k < n; k++)
        {
            dst[k] = src[k];
            src[k].~T();
        }
    }

    static void move_init(T* src, void* dst)
    {
        assert(src != dst);
        ::new (dst) T(*src);
        src->~T();
    }

    static void move_init_n(T const* src, void* dst, size_t n)
    {
        assert(src != dst);
        for(size_t k = 0; k < n; k++)
        {
            ::new ((void*)((char*)dst + k)) T(src[k]);
            src[k].~T();
        }
    }
};

template<typename T>
class BitOrClassCSM<T, true> : public BitOrClassCSM<T, false>
{
public:
    static void copy_n(T const* src, T const* dst, size_t n)
    {
        std::memcopy((void*)dst, (void*)src, n);
    }

    static void move_n(T* src, T* dst, size_t n)
    {
        assert(src != dst);
        for(size_t k = 0; k < n; ++k)
        {
            ::new((void*)((char*)dst + k)) T(src[k]);
            src[k].~T();
        }
    }

    static void move_init_n(T const* src, void* dst, size_t n)
    {
        assert(src != dst);
        std::memcpy(dst, (void*)src, n);
    }
};