#ifndef BASIC_HPP
#define BASIC_HPP

#include <string>

class basic {
public:
	basic() {}
	virtual ~basic() {}
    std::string id() const;
};

typedef basic* create_t();
typedef void destroy_t(basic*);

#if defined(__linux__) || defined(__sun__)
static const std::string LIB_PRE = "lib";
static const std::string LIB_EXT = ".so";
#elif defined(__APPLE__)
static const std::string LIB_PRE = "lib";
static const std::string LIB_EXT = ".dylib";
#else
static const std::string LIB_PRE = "";
static const std::string LIB_EXT = "";
#endif

#endif
