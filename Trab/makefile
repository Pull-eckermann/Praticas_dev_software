parametrosCompilacao=-Wall #-Wshadow
nomePrograma=blackjack

all: $(nomePrograma)

$(nomePrograma): main.o Jogador.o Carteira.o Carta.o Baralho.o
	g++ -o $(nomePrograma) main.o Jogador.o Carteira.o Carta.o Baralho.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Jogador.o: Jogador.hpp Jogador.cpp
	g++ -c Jogador.cpp $(parametrosCompilacao)

Carteira.o: Carteira.hpp Carteira.cpp
	g++ -c Carteira.cpp $(parametrosCompilacao)

Carta.o: Carta.hpp Carta.cpp
	g++ -c Carta.cpp $(parametrosCompilacao)

Baralho.o: Baralho.hpp Baralho.cpp
	g++ -c Baralho.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)