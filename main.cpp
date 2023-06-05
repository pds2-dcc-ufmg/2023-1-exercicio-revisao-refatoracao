#include "Streaming.hpp"
#include "Filme.hpp"
#include "Serie.hpp"
#include <iostream>
#include <string>

int main()
{
    Streaming ss;
    std::string tipo;

    while (std::cin >> tipo) {
        if (tipo == "Filme") {
            std::string nome, genero;
            int ano, duracao;
            std::cin >> genero >> ano >> duracao;
            std::cin.ignore();
            std::getline(std::cin, nome);

            Filme* filme = new Filme(nome, ano, genero, duracao);
            if (duracao >= 50) {
                ss.cadastrar_filme(filme);
            }
        }
        else if (tipo == "Serie") {
            std::string nome, genero;
            int ano, num_temporadas, num_episodios;
            std::cin >> genero >> ano >> num_temporadas >> num_episodios;
            std::cin.ignore();
            std::getline(std::cin, nome);

            Serie* serie = new Serie(nome, ano, genero, num_temporadas, num_episodios);
            if (num_temporadas >= 2) {
                ss.cadastrar_serie(serie);
            }
        }
        else if (tipo == "Nota") {
            int id, nota;
            std::cin >> id >> nota;
            if (nota >= 0 && nota <= 10) {
                ss.avaliar(id, nota);
            }
        }
    }

    ss.print_catalogo();

    return 0;
}
