parametrosCompilacao=-Wall #-Wshadow
nomePrograma=prova

all: $(nomePrograma)

$(nomePrograma): main.o Retangulo.o Circulo.o TelaDesenho.o ArgumentoNegativoEx.o
	g++ -o $(nomePrograma) main.o Retangulo.o Circulo.o TelaDesenho.o ArgumentoNegativoEx.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Retangulo.o: Retangulo.hpp Retangulo.cpp
	g++ -c Retangulo.cpp $(parametrosCompilacao)

Circulo.o: Circulo.hpp Circulo.cpp
	g++ -c Circulo.cpp $(parametrosCompilacao)

TelaDesenho.o: TelaDesenho.hpp TelaDesenho.cpp
	g++ -c TelaDesenho.cpp $(parametrosCompilacao)

ArgumentoNegativoEx.o: ArgumentoNegativoEx.hpp ArgumentoNegativoEx.cpp
	g++ -c ArgumentoNegativoEx.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)