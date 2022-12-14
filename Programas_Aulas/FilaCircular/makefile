parametrosCompilacao=-Wall #-Wshadow
nomePrograma=aula

all: $(nomePrograma)

$(nomePrograma): main.o FilaCircular.hpp 
	g++ -o $(nomePrograma) main.o FilaCircular.hpp $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)
