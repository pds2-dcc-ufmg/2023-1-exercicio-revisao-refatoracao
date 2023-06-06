#include "Streaming.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

int main()

{
Streaming streaming;
std::string option;

while (std::cin >> option)
{
    if (option == "Filme")
    {
      std::string nome, genero;
      int ano, duracao;
      std::cin >> genero >> ano >> duracao;
      std::cin.ignore();
      std::getline(std::cin, nome);

      Video *video = new Video(nome, ano, genero, option,             duracao, 0, 0);

      if (duracao >=50)
      {
        streaming.cadastrar_filme(video);
      }
      }
    
else if (option == "Serie") 
{

      std::string nome, genero;
      int ano, ntempo, totalep;
      std::cin >> genero >> ano >> ntempo >> totalep;
      std::cin.ignore();
      std::getline(std::cin, nome);
  
      Video *video = new Video(nome, ano, genero, option,0,           ntempo, totalep);
      if (totalep >=2) 
      {  
        streaming.cadastrar_serie(video);
      }
    }


else if (option == "Nota")
{
      int id, nota;
      std::cin >> id >> nota;

    if (nota >=0 && nota <= 10) {
      streaming.avaliacao(id, nota);
    }
  }
}

streaming.print_catalogo();

return 0;
}