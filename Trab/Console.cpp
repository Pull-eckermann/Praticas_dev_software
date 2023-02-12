#include "Console.hpp"
#include<iostream>

void Console::imprimeMesa(Mesa& mesa){
  std::list<Jogador*>::iterator it;

  std::cout << "|----------------------------------------------------------|" << std::endl;
  std::cout << "|                      *Dealer*                            |" << std::endl;
  std::cout << "|                       " << mesa.getDealer().getSaldo() 
    << " Fichas                     |" << std::endl;
  std::cout << "|                       ";
  mesa.getDealer().mostrarMao();
  std::cout << "|                                                          |" << std::endl;
  std::cout << "|                                                          |" << std::endl;
  std::cout << "|                                                          |" << std::endl;
  for (it = mesa.getJogadores().begin(); it != mesa.getJogadores().end(); ++it){
    std::cout << "|" << (*it)->getNick() << " " << (*it)->getSaldo() << " Fichas" << std::endl;
    std::cout << "|";
    (*it)->mostrarMao();
    std::cout << "|                                                          |" << std::endl;
  }
  std::cout << "|                                                          |" << std::endl;
  std::cout << "|----------------------------------------------------------|" << std::endl;
}
