#include "Streaming.hpp"
#include <iostream>
#include <string>

int main() {
    Streaming ss;
    std::string subtipo;

    while (std::cin >> subtipo) {
        if (subtipo == "Filme") {
            std::string nome, genero;
            int ano, filme_duracao;
            std::cin >> genero >> ano >> filme_duracao;
            std::getline(std::cin, nome);

            if (filme_duracao >= 50) {
                Video* v = new Video(nome, ano, genero, subtipo, filme_duracao, 0, 0);
                ss.cadastrar_filme(v);
            }
        }
        else if (subtipo == "Serie") {
            std::string nome, genero;
            int ano, n_temp, total_ep;
            std::cin >> genero >> ano >> n_temp >> total_ep;
            std::getline(std::cin, nome);

            if (total_ep >= 2) {
                Video* v = new Video(nome, ano, genero, subtipo, 0, n_temp, total_ep);
                ss.cadastrar_serie(v);
            }
        }
        else if (subtipo == "Nota") {
            int i, nota;
            std::cin >> i >> nota;

            if (n >= 0 && n <= 10) {
                ss.avaliacao(i, n);
            }
        }
    }

    ss.print_catalogo();

    return 0;
}