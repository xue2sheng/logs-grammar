#include "basic.hpp"

extern "C" basic* create() { return new basic; }

extern "C" void destroy(basic* b) { delete b; }
