#include <string>
#include "myfirst.hpp"
#include "myfirst.cpp"

template void print_typeof<double>(double const&);
template void print_typeof<std::string>(std::string const&);