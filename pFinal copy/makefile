parametrosCompilacao=-Wall #-Wshadow
nomePrograma=prova

all: $(nomePrograma)

$(nomePrograma): main.o Gerador.o EquipamentoEletrico.o EquipamentoEletricoConvencional.o EquipamentoEletricoResistivo.o
	g++ -o $(nomePrograma) main.o Gerador.o EquipamentoEletrico.o EquipamentoEletricoConvencional.o EquipamentoEletricoResistivo.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Gerador.o: Gerador.hpp Gerador.cpp
	g++ -c Gerador.cpp $(parametrosCompilacao)

EquipamentoEletrico.o: EquipamentoEletrico.hpp EquipamentoEletrico.cpp
	g++ -c EquipamentoEletrico.cpp $(parametrosCompilacao)

EquipamentoEletricoConvencional.o: EquipamentoEletricoConvencional.hpp EquipamentoEletricoConvencional.cpp
	g++ -c EquipamentoEletricoConvencional.cpp $(parametrosCompilacao)

EquipamentoEletricoResistivo.o: EquipamentoEletricoResistivo.hpp EquipamentoEletricoResistivo.cpp
	g++ -c EquipamentoEletricoResistivo.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)

	