#include <iostream>
#include "Mesa.hpp"

int main(){
    unsigned int tamanho{1};
    Baralho* baralho{new Baralho(tamanho)};
    Dealer dealer;
    Jogador* j1 = new Jogador("Felipe", 1000);
    Jogador* j2 = new Jogador("Erick", 2000);
    Carta* c;

    Mesa mesa{dealer, baralho};

    mesa.addJogador(j1);
    mesa.addJogador(j2);
    mesa.printJogadores();
    for (std::list<Jogador*>::iterator it{mesa.getJogadores().begin()}; it != mesa.getJogadores().end(); ++it){
        for (int i = 0; i < 2; i++){
            c = dealer.puxarCarta(baralho);
            (*it)->adicionarCarta(c);
            std::cout << std::endl << "A carta ";
            c->printCarta();
            std::cout << " foi adicionada à mão do jogador " << (*it)->getNick() << ".\n";
        }
        (*it)->mostrarMao();
    }
    for (std::list<Jogador*>::iterator it{mesa.getJogadores().begin()}; it != mesa.getJogadores().end(); ++it){
        (*it)->mostrarMao();
        (*it)->limparMao();
        (*it)->mostrarMao();
    }

    /*dealer.embaralharCartas(baralho);
    std::cout << std::endl;
    baralho->printCartas();
    for (int i = 0; i < 110; i++){
        if (baralho->getCartas().empty()){
            baralho->setupCartas(tamanho);
        }
        Carta* c = dealer.puxarCarta(baralho);

        std::cout << std::endl << "A carta ";
        c->printCarta();
        std::cout << " foi puxada do baralho.\n\n";
    }*/

}
/* IMPLEMENTAR>>>>>> Dealer::limparMesa;
*/