#ifndef TELADESENHO_H
#define TELADESENHO_H

#include <string>
#include <list>
#include <iostream>

#include "Forma.hpp"

class  TelaDesenho{
	public:
        TelaDesenho();
		virtual ~TelaDesenho() = default;

        void adicionarForma(Forma* forma);
        const std::list<Forma*>& getFormas() const;

        unsigned long calculaAreaTotal();

	private:

        std::list<Forma*> formas;
};
#endif