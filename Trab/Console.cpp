#include "Console.hpp"
#include<iostream>

void Console::imprimeMesa(Mesa& mesa){
  std::list<Jogador*>::iterator it;

  std::cout << "|----------------------------------------------------------|" << std::endl;
  std::cout << "|                      *Dealer*                            |" << std::endl;
  std::cout << "|                       " << mesa.getDealer()->getSaldo() << std::endl;
  std::cout << "|    "; mesa.getDealer()->mostrarMao();
  std::cout << "|              Pontuacao: " << mesa.getDealer()->valorMao() << std::endl;
  std::cout << "|                                                          |" << std::endl;
  std::cout << "|                                                          |" << std::endl;
  std::cout << "|                                                          |" << std::endl;
  for (it = mesa.getJogadores().begin(); it != mesa.getJogadores().end(); ++it){
    std::cout << **it;
    std::cout << "|"; (*it)->mostrarMao();
    std::cout << "|                                                          |" << std::endl;
  }
  std::cout << "|                                                          |" << std::endl;
  std::cout << "|----------------------------------------------------------|" << std::endl;
}

void Console::telaInicial(){
  std::cout << "  ____          __    ___                __    ___        \n";
  std::cout << "  |   | |      |  |  |   |  |  /     |  |  |  |   | |  /  \n";
  std::cout << "  |   | |     |    | |      | /      | |    | |     | /   \n";
  std::cout << "  |__ / |     |____| |      |/       | |____| |     |/    \n";
  std::cout << "  |   | |     |    | |      ||       | |    | |     ||    \n";
  std::cout << "  |   | |     |    | |      | |      | |    | |     | |   \n";
  std::cout << "  |__ / |____ |    | |___|  |  | |___| |    | |___| |  |  \n";
  std::cout << "\n";
  std::cout << "  1 - Jogar\n";
  std::cout << "  2 - Sair\n";
}
