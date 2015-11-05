#ifndef BASIC_HPP
#define BASIC_HPP

class basic {
public:
	basic() {}
	virtual ~basic() {}
};

typedef basic* create_t();
typedef void destroy_t(basic*);

#if defined(__linux__) || defined(__sun__)
static const char* LIB_EXT =  ".so";
#elif defined(__APPLE__)
static const char* LIB_EXT = ".dylib";
#else
static const char* LIB_EXT = "";
#endif

#endif
