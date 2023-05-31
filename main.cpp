#include "Streaming.hpp"

int main() {
    Streaming ss;
    std::string tipo;

    while (std::cin >> tipo) {

        if (tipo == "Filme") {

            std::string nome;
            std::string genero;
            int ano, duracao;

            std::cin >> genero >> ano >> duracao;
            getline(std::cin, nome);

            Video *v = new Video(nome, ano, genero, tipo, duracao, 0, 0);

            if (duracao >= 50)
                ss.cadastrar_filme(v);

        }


        if (tipo == "Serie") {

            std::string nome;
            std::string genero;
            int ano, numero_temporadas, tamanho_episodios;

            std::cin >> genero >> ano >> numero_temporadas >> tamanho_episodios;
            getline(std::cin, nome);

            Video *v = new Video(nome, ano, genero, tipo, 0, numero_temporadas, tamanho_episodios);

            if (2 <= tamanho_episodios)
                ss.cadastrar_serie(v);

        }


        if (tipo == "Nota") {
            int id, nota;

            std::cin >> id >> nota;

            if ((nota <= 10) && (nota >= 0)) {
                ss.avaliacao(id, nota);
            }

        }

        if (tipo == "exit"){
            break;
        }

    }

    ss.print_catalogo();

    return 0;
}