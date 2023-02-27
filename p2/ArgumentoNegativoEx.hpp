#ifndef ARGUMENTO_NEGATIVO_EX_HPP
#define ARGUMENTO_NEGATIVO_EX_HPP

#include <stdexcept>

namespace erick{
class ArgumentoNegativoEx : public std::runtime_error{
    public:
        const double medida;

        explicit ArgumentoNegativoEx(const double medida);
        virtual ~ArgumentoNegativoEx() = default;
};
}
#endif