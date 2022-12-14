#ifndef FILACIRCULAR_HPP
#define FILACIRCULAR_HPP

#include <cstdlib>

template <typename T = int, std::size_t MAX_FILA = 10>

class FilaCircular{
	public:
		FilaCircular():nodos{0}{
		}

		~FilaCircular(){
		}

		bool push(const T valor){
			if(this->estaCheia())
				return false;
			this->nodos++;
			this->filacircular[this->nodos] = valor;
			return true;
		}

		bool pop(T* const retorno){
			if(!this->estaVazia()){
				*retorno = this->filacircular[nodos];
				this->nodos--;
				return true;
			}
			return false;
		}

		bool estaVazia() const{
			if(nodos < 0)
				return true;
			return false;
		}

		bool estaCheia() const{
			if(nodos > -1 && ((size_t)nodos >= MAX_FILA -1))
				return true;
			return false;
		}
	private:
		T filacircular[MAX_FILA];
		int nodos;
};
#endif
