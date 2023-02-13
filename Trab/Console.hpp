#ifndef CONSOLE_HPP
#define CONSOLE_HPP

#include "Mesa.hpp"

class Console{
	public:
		Console() = delete;
		virtual ~Console() = default;

    static void imprimeMesa(Mesa& mesa);
		static void telaInicial();

};
#endif