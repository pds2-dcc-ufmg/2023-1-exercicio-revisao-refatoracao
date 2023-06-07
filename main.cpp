#include "Streaming.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

int main()
{
    std::string tipo;

    Streaming streamingService;

    while (std::cin >> tipo) {
        if (tipo == "Filme") {
            std::string nome, genero;
            int ano, duracao;
            std::cin >> genero >> ano >> duracao;
            std::getline(std::cin, nome);

            Video* video;
            video = new Video(nome, ano, genero, tipo, duracao, 0, 0);

            if (duracao >= 50) {
                streamingService.cadastrar_filme(video);
            }
        }

        if (tipo == "Serie") {
            std::string nome, genero;
            int ano, numeroTemporadas, totalEpisodios;
            std::cin >> genero >> ano >> numeroTemporadas >> totalEpisodios;
            std::getline(std::cin, nome);

            Video* video;
            video = new Video(nome, ano, genero, tipo, 0, numeroTemporadas, totalEpisodios);

            if (totalEpisodios >= 2) {
                streamingService.cadastrar_serie(video);
            }
        }

        if (tipo == "Nota") {
            int id, nota;
            std::cin >> id >> nota;

            if (nota >= 0 && nota <= 10) {
                streamingService.avaliacao(id, nota);
            }
        }
    }

    streamingService.print_catalogo();

    return 0;
}
