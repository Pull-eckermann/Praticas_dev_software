#include "InvalidAgeEx.hpp"

using namespace ufpr;

InvalidAgeEx:: InvalidAgeEx(unsigned short int idade)
  :std::runtime_error{"Idade maior que 160, ninguem vive tanto"}, age{idade}{
}
