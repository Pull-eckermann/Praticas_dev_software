parametrosCompilacao=-Wall #-Wshadow
nomePrograma=blackjack

all: $(nomePrograma)

$(nomePrograma): main.o Agente.o Carta.o Baralho.o Dealer.o Carteira.o Jogador.o Mesa.o Console.o
	g++ -o $(nomePrograma) main.o Agente.o Carta.o Baralho.o Dealer.o Carteira.o Jogador.o Mesa.o Console.o $(parametrosCompilacao)

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

Mesa.o: Mesa.hpp Mesa.cpp
	g++ -c Mesa.cpp $(parametrosCompilacao)

Console.o: Console.hpp Console.cpp
	g++ -c Console.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)
