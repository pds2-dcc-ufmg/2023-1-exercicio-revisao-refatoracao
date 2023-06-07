#include "Streaming.hpp"
#include "Filme.hpp"
#include "Serie.hpp"
#include "Video.hpp"

int main() {
    Streaming streaming;
    std::string tipo;

    while (std::cin >> tipo) {
        if (tipo == "Serie") {
            std::string nome;
            std::string genero;
            int ano, numero_temporadas, tamanho_episodios;

            std::cin >> genero >> ano >> numero_temporadas >> tamanho_episodios;
            std::cin.ignore();
            getline(std::cin, nome);

            Video* video = new Serie(nome, genero, ano, numero_temporadas, tamanho_episodios);

            if (2 <= tamanho_episodios)
                streaming.cadastrar_video(video);
}
        if (tipo == "Filme") {
            std::string nome;
            std::string genero;
            int ano, duracao;

            std::cin >> genero >> ano >> duracao;
            std::cin.ignore();
            getline(std::cin, nome);

            Video* sex3oRetorno = new Filme(nome, genero, ano, duracao);

            if (duracao >= 50)
                streaming.cadastrar_video(sex3oRetorno);
        }



        // Avaliar um item do catálogo
        if (tipo == "Nota") {
            unsigned int id, nota;
            std::cin >> id >> nota;

            if (nota <= 10) {
                streaming.avaliar_video(id, nota);
            }
        }
    }

    streaming.imprimir_catalogo();

    return 0;
}
