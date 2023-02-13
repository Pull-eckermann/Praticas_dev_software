#include "Mesa.hpp"

#include <iostream>

Mesa::Mesa(){}

Mesa::Mesa(Dealer dealer, Baralho *baralho)
    :dealer{dealer}, baralho{baralho}{
}

Mesa::~Mesa(){
}

void Mesa::setupRodada(){
    Carta* c;
    unsigned int t_baralho = this->baralho->getTamanho(); //Número de baralhos juntos

    std::list<Jogador*>::iterator it;
    //Distribuí as cartas para os jogadores
    for (it = this->getJogadores().begin(); it != this->getJogadores().end(); ++it){
        for (int i = 0; i < 2; i++){
            c = dealer.puxarCarta(this->baralho);
            if(c == nullptr){ //Se o baralho está vazio
                free(this->baralho); //Libera o baralho antigo
                this->setBaralho(new Baralho{t_baralho}); //Cria um novo baralho do mesmo tamanho
                dealer.embaralharCartas(this->baralho); //Embaralha o novo baralho
                c = dealer.puxarCarta(this->baralho);
            }
            (*it)->adicionarCarta(c);
        }
        (*it)->mostrarMao();
    }
    //Adiciona duas cartas para o Dealer
    for (int i = 0; i < 2; i++){
        c = dealer.puxarCarta(this->baralho);
        if(c == nullptr){ //Se o baralho está vazio
            free(this->baralho);
            this->setBaralho(new Baralho{t_baralho});
            dealer.embaralharCartas(this->baralho);
            c = dealer.puxarCarta(this->baralho);
        }
        dealer.adicionarCarta(c);
    }
}


// #### ESBOÇO DE POSSIVEIS ACOES DO JOGADOR ####
/*void Mesa::posAcao(Jogador* jogador){
    unsigned short valorMao = jogador->valorMao();
    if (valorMao > 21 )
        std::cout << "Estourou.";
    else if (valorMao == 21)
        std::cout << "Blackjack.";
    else if (valorMao <= 20)
        if (jogador->getCartas().size() == 2)
            if (jogador->getCartas().front()->getValor() * 2 == valorMao) //se tem 2 cartas e o dobro do valor da primeira = valorTotal, então as cartas são iguais
                std::cout << "Opções: Hit, Stand, Double, Split.";
            else //as 2 cartas não são iguais
                std::cout << "Opções: Hit, Stand, Double.";
}*/

Dealer Mesa::getDealer() const{
    return this->dealer;
}

Baralho* Mesa::getBaralho() const{
    return this->baralho;
}

void Mesa::setBaralho(Baralho* baralho){
    this->baralho = baralho;
}

void Mesa::addJogador(Jogador *jogador){
    this->jogadores.push_back(jogador);
}

void Mesa::removeJogador(Jogador *jogador){
    this->jogadores.remove(jogador);
}

std::list<Jogador*>& Mesa::getJogadores(){
    return this->jogadores;
}

const void Mesa::printJogadores() {
    std::list<Jogador*>::iterator it{this->jogadores.begin()};
    for ( ; it != jogadores.end(); ++it){
        std::cout << (*it)->getNick() << " ";
    }
    std::cout << std::endl;
}