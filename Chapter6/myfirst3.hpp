#pragma once

#if defined (USE_EXPORT)
#define EXPORT export
#else
#define EXPORT 
#endif

EXPORT template <typename T> void print_typeof(T const&);

#if !defined(USE_EXPORT)
#include "myfirst.cpp"
#endif