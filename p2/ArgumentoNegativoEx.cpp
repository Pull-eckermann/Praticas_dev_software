#include "ArgumentoNegativoEx.hpp"

using namespace erick;

ArgumentoNegativoEx::ArgumentoNegativoEx(const double medida)
    :std::runtime_error{"A medida nao pode ser negativa"}, medida{medida}{
}