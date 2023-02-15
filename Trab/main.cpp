#include <iostream>
#include <stdexcept>

#include "Console.hpp"
#include "Mesa.hpp"

int main(){
    //Inicia e coleta os dados
    std::string opcao;
    system("clear");
    Console::telaInicial();

    std::cout << "Qual sua opção?: ";
    std::cin >> opcao;
    while (!(opcao == "1" || opcao == "2")){
        std::cout << "Opção inválida, digite novamente: ";
        std::cin >> opcao;
    }

    //try{
    //
    //}
    //catch(const std::exception& e)
    //{
    //    std::cout << e.what() << '\n';
    //}

    if(opcao == "1"){
        unsigned int tamanho{6}; //Tamanho do baralho
        Dealer dealer{10000000}; //Dealer inicia com bastante dinheiro
        Mesa mesa{&dealer, new Baralho(tamanho)};

        std::cout << "|============================================================|\n";
        mesa.coletaDados();
        
        system("clear");
        //Distribui 2 cartas para cada jogador e o dealer
        dealer.embaralharCartas(mesa.getBaralho());
        while(dealer.getSaldo() > 0){ //Enquanto ainda não se quebrou a banca
            mesa.setupRodada();
            Console::imprimeMesa(mesa);

            dealer.limparMesa(mesa.getJogadores());
            unsigned int recompensas = dealer.entregarRecompensas(100000);
        }

    }else if(opcao == "2"){
        exit(1);
    }
}