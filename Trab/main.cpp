#include <iostream>
#include "Console.hpp"
#include "Mesa.hpp"

int main(){
    unsigned int tamanho{1};
    int n_jogadores;
    Dealer dealer{1000000};
    Mesa mesa{dealer, new Baralho(tamanho)};
    Carta* c;

    //Inicia e coleta os dados
    system("clear");
    std::cout << "BEM VINDO AO BLACKJACK DA PESADA" << std::endl;
    std::cout << "Digite o número de jogadores: ";
    std::cin >> n_jogadores;
    //Confere se o número de jogadores está dentro da margem
    while(n_jogadores <= 0 || n_jogadores > 4){
        std::cout << "Por favor, o número de jogadores deve estar entre 1 e 4: ";
        std::cin >> n_jogadores;
    }

    system("clear");
    //Coleta os jogadores
    for(int i = 1; i <= n_jogadores; ++i){
        std::string nick;
        unsigned int fichas;
        std::cout << "Digite o nome do " << i << "º jogador: ";
        std::cin >> nick;
        std::cout << "Quantas fichas possuem o jogador " << nick << "?: ";
        std::cin >> fichas;
        mesa.addJogador(new Jogador(nick, fichas));
        system("clear");
    }

    //int cont = 0;
    //while(cont < 3){
        //Distribui 2 cartas para cada jogador e o dealer
        mesa.setupRodada();

        Console::imprimeMesa(mesa);
        
        std::cout << "\nDealer mao: ";
        dealer.mostrarMao();
        dealer.limparMesa(mesa.getJogadores());
        std::cout << "\nDealer mao: ";
        dealer.mostrarMao();
    //    cont ++;
    //}
}