#include "Mesa.hpp"
#include "Console.hpp"

#include <iostream>
#include <unistd.h>

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
    std::string n_jogadores;
    std::cout << "Digite o número de jogadores: ";
    std::cin >> n_jogadores;
    
    //Confere se o número de jogadores está dentro da margem
    while(!(n_jogadores == "1" || n_jogadores == "2" || n_jogadores == "3" || n_jogadores == "4")){
        std::cout << "Por favor, o número de jogadores deve estar entre 1 e 4: ";
        std::cin >> n_jogadores;
    }
    std::cout << std::endl;

    //Coleta os jogadores
    int n = stoi(n_jogadores);
    for(int i = 1; i <= n; ++i){
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

void Mesa::setaApostas(){
    int fichas{0};
    std::list<Jogador*>::iterator it;
    for (it = this->getJogadores().begin(); it != this->getJogadores().end(); ++it){
        std::cout << "Aposta dessa rodada para o jogador " << (*it)->getNick() << ": ";
        std::cin >> fichas;
        (*it)->apostar(fichas);
    }
}

void Mesa::rodada(){
    unsigned short valorMao;
    int acao;
    Carta* c;
    std::list<Jogador*>::iterator it;
    for (it = this->getJogadores().begin(); it != this->getJogadores().end(); ++it){
        bool proxPlayer{false};
        while (!proxPlayer){
            Console::imprimeMesa(*this);
            valorMao = (*it)->valorMao();
            acao = 0;
            if (valorMao >= 21){
                (*it)->stand();
                proxPlayer = true;
            }
            //else if (dealer->getCartas().front()->getValor()  == 11 && (*it)->getCartas().size() == 2)
            //    std::cout << "Escolha uma ação:" << std::endl << "1. Hit\n2. Stand\n3. Double\n4. Surrender\n5. Seguro";
            else if ((*it)->getCartas().size() == 2){
                std::cout << "Vez do jogador " << (*it)->getNick() << std::endl;
                std::cout << "Escolha uma ação:" << std::endl << "1. Hit\n2. Stand\n3. Double\n4. Surrender\n";
            }else{
                std::cout << "Vez do jogador " << (*it)->getNick() << std::endl; 
                std::cout << "Escolha uma ação:" << std::endl << "1. Hit\n2. Stand\n";
            }
            std::cin >> acao;
            switch (acao){
                case 1:
                    c = dealer->puxarCarta(this->baralho);
                    (*it)->hit(c);
                    break;
                case 2:
                    (*it)->stand();
                    proxPlayer = true;
                    break;
                case 3:
                    c = dealer->puxarCarta(this->baralho);
                    (*it)->dobrar(c);
                    break;
                case 4:
                    (*it)->surrender();
                    proxPlayer = true;
                    break;
            }
            system("clear");
        }
    }
    for (int i = 0; (i < 5) && (dealer->valorMao() < 17); i++){
        system("clear");
        c = dealer->puxarCarta(this->baralho);
        dealer->adicionarCarta(c);
        Console::imprimeMesa(*this);
        sleep(2500);
    }
    unsigned short dealerValorMao{dealer->valorMao()};
    for (it = this->getJogadores().begin(); it != this->getJogadores().end(); ++it){
        valorMao = (*it)->valorMao();
        if (valorMao > dealerValorMao){
            std::cout << "Voce ganhou.\n";
            dealer->entregarRecompensas((*it)->getApostaAtual());
            (*it)->ganhar();
        }else if (valorMao < dealerValorMao){
            std::cout << "Voce perdeu.\n";
            dealer->colherAposta((*it)->getApostaAtual());
        }else{
            std::cout << "Voce empatou.\n";
            (*it)->empatar();
        }    
    }
}

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