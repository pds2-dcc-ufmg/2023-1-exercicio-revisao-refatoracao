#include "Streaming.hpp"

int main() {
    Streaming streaming;
    std::string tipo;

    while (std::cin >> tipo) {

        // Cadstrar um filme
        if (tipo == "Filme") {

            std::string nome;
            std::string genero;
            int ano, duracao;

            std::cin >> genero >> ano >> duracao;
            getline(std::cin, nome);

            Video* v = new Filme(nome, genero, ano, duracao);

            if (duracao >= 50)
                streaming.cadastrar(v);

        }


        // Cadastrar uma série
        if (tipo == "Serie") {

            std::string nome;
            std::string genero;
            int ano, numero_temporadas, tamanho_episodios;

            std::cin >> genero >> ano >> numero_temporadas >> tamanho_episodios;
            getline(std::cin, nome);

            Video *v = new Serie(nome, genero, ano, numero_temporadas, tamanho_episodios);

            if (2 <= tamanho_episodios)
                streaming.cadastrar(v);

        }


        // Avaliar um item do ctálogo
        if (tipo == "Nota") {
            unsigned int id, nota;

            std::cin >> id >> nota;

            if (nota <= 10) {
                streaming.avaliacao(id, nota);
            }

        }

    }

    streaming.print_catalogo();

    return 0;
}
