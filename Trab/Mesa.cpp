#include "Mesa.hpp"

#include <iostream>

Mesa::Mesa(){}

Mesa::Mesa(Dealer *dealer, Baralho *baralho)
    :dealer{dealer}, baralho{baralho}{
}

Mesa::~Mesa(){
}

//Começa uma rodada, distribuindo duas cartas do baralho para todos
void Mesa::setupRodada(){
    Carta* c;
    unsigned int t_baralho = this->baralho->getTamanho(); //Número de baralhos juntos

    std::list<Jogador*>::iterator it;
    //Distribuí as cartas para os jogadores
    for (it = this->getJogadores().begin(); it != this->getJogadores().end(); ++it){
        for (int i = 0; i < 2; i++){
            c = dealer->puxarCarta(this->baralho);
            if(c == nullptr){ //Se o baralho está vazio
                this->baralho->setupCartas(t_baralho); //Cria um novo baralho do mesmo tamanho
                dealer->embaralharCartas(this->baralho); //Embaralha o novo baralho
                c = dealer->puxarCarta(this->baralho);
            }
            (*it)->adicionarCarta(c);
        }
    }
    //Adiciona duas cartas para o Dealer
    for (int i = 0; i < 2; i++){
        c = dealer->puxarCarta(this->baralho);
        if(c == nullptr){ //Se o baralho está vazio
            this->baralho->setupCartas(t_baralho);
            dealer->embaralharCartas(this->baralho);
            c = dealer->puxarCarta(this->baralho);
        }
        dealer->adicionarCarta(c);
    }
}

void Mesa::coletaDados(){
    int n_jogadores;
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
        int fichas;
        std::cout << "Digite o nome do " << i << "º jogador: ";
        std::cin >> nick;
        std::cout << "Quantas fichas possuem o jogador " << nick << "?: ";
        std::cin >> fichas;
        this->addJogador(new Jogador(nick, fichas));
        std::cout << std::endl;
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

Dealer* Mesa::getDealer() const{
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