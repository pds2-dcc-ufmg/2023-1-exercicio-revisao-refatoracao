#include <iostream>
#include <string>
#include "Filme.hpp"
#include "Serie.hpp"
#include "Streaming.hpp"


int main()
{
Streaming ss;
std::string tipo;

while (std::cin >> tipo) {
    if (tipo == "Filme") {
        std::string nomedofilme, genero;
        int ano, duracao;
        std::cin >> genero >> ano >> duracao;
        std::cin.ignore();
        std::getline(std::cin, nomedofilme);

        Filme* filme = new Filme(nomedofilme, ano, genero, duracao);
        if (duracao >= 50) {
            ss.cadastrar_filme(filme);
        }
    }
    else if (tipo == "Serie") {
        std::string nomedaserie, genero;
        int ano, numtemporadas, numepisodios;
        std::cin >> genero >> ano >> numtemporadas >> numepisodios;
        std::cin.ignore();
        std::getline(std::cin, nomedaserie);

        Serie* serie = new Serie(nomedaserie, ano, genero, numtemporadas, numepisodios);
        if (numepisodios >= 2) {
            ss.cadastrar_serie(serie);
        }
    }
    else if (tipo == "Nota") {
        unsigned int i, nota;
        std::cin >> i >> nota;

        if (nota >= 0 && nota <= 10) {
            ss.avaliacao(i, nota);
        }
    }
    else if (tipo == "Lista"){
           ss.print_catalogo();
  
    }
}

return 0;
}