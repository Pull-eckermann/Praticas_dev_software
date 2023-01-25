#ifndef INVALID_AGE_EX_HPP
#define INVALID_AGE_EX_HPP

#include <stdexcept>

namespace ufpr{
class InvalidAgeEx : public std::runtime_error{
    public:
        unsigned short int age;
        
        InvalidAgeEx(unsigned short int idade);
        virtual ~InvalidAgeEx() = default;
};
} //namespace ufpr
#endif