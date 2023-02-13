#include <iostream>
#include "Console.hpp"
#include "Mesa.hpp"

int main(){
    //Inicia e coleta os dados
    int opcao = 0;
    system("clear");
    Console::telaInicial();
    std::cout << "Qual sua opção?: ";
    std::cin >> opcao;
    //while ((opcao != 1) || (opcao != 2)){
    //    std::cout << "Opção inválida, digite novamente: ";
    //    std::cin >> opcao;
    //}
    if(opcao == 1){
        unsigned int tamanho{1};
        int n_jogadores;
        Dealer dealer{10000000};
        Mesa mesa{&dealer, new Baralho(tamanho)};

        std::cout << "|============================================================|\n";
        std::cout << "Digite o número de jogadores: ";
        std::cin >> n_jogadores;
        //Confere se o número de jogadores está dentro da margem
        while(n_jogadores <= 0 || n_jogadores > 4){
            std::cout << "Por favor, o número de jogadores deve estar entre 1 e 4: ";
            std::cin >> n_jogadores;
        }
        std::cout << std::endl;
        //Coleta os jogadores
        for(int i = 1; i <= n_jogadores; ++i){
            std::string nick;
            unsigned int fichas;
            std::cout << "Digite o nome do " << i << "º jogador: ";
            std::cin >> nick;
            std::cout << "Quantas fichas possuem o jogador " << nick << "?: ";
            std::cin >> fichas;
            mesa.addJogador(new Jogador(nick, fichas));
            std::cout << std::endl;
        }
        
        system("clear");
        //Distribui 2 cartas para cada jogador e o dealer
        while(dealer.getSaldo() > 0){ //Enquanto ainda não se quebrou a banca
            mesa.setupRodada();
            Console::imprimeMesa(mesa);

            dealer.limparMesa(mesa.getJogadores());
        }

        
    }else if(opcao == 2){
        exit(1);
    }
}