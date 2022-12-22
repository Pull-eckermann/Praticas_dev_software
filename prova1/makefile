parametrosCompilacao=-Wall #-Wshadow
nomePrograma=prova1

all: $(nomePrograma)

$(nomePrograma): main.o TelaDesenho.o Retangulo.o Circulo.o Forma.hpp 
	g++ -o $(nomePrograma) main.o TelaDesenho.o Retangulo.o Circulo.o Forma.hpp $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

TelaDesenho.o: TelaDesenho.hpp TelaDesenho.cpp
	g++ -c TelaDesenho.cpp $(parametrosCompilacao)

Retangulo.o: Retangulo.hpp Retangulo.cpp
	g++ -c Retangulo.cpp $(parametrosCompilacao)

Circulo.o: Circulo.hpp Circulo.cpp
	g++ -c Circulo.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)