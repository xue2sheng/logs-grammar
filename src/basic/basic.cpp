#include "basic.hpp"

std::string basic::id()
{
    return "basic_library";
}

extern "C" basic* create() { return new basic; }
extern "C" void destroy(basic* b) { delete b; }
