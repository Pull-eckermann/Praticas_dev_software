parametrosCompilacao=-Wall #-Wshadow
nomePrograma=blackjack

all: $(nomePrograma)

$(nomePrograma): main.o Agente.o Carteira.o Carta.o Baralho.o Jogador.o Dealer.o
	g++ -o $(nomePrograma) main.o Agente.o Carteira.o Carta.o Baralho.o Jogador.o Dealer.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Agente.o: Agente.hpp Agente.cpp
	g++ -c Agente.cpp $(parametrosCompilacao)

Jogador.o: Jogador.hpp Jogador.cpp
	g++ -c Jogador.cpp $(parametrosCompilacao)

Carteira.o: Carteira.hpp Carteira.cpp
	g++ -c Carteira.cpp $(parametrosCompilacao)

Carta.o: Carta.hpp Carta.cpp
	g++ -c Carta.cpp $(parametrosCompilacao)

Baralho.o: Baralho.hpp Baralho.cpp
	g++ -c Baralho.cpp $(parametrosCompilacao)

Dealer.o: Dealer.hpp Dealer.cpp
	g++ -c Dealer.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)
