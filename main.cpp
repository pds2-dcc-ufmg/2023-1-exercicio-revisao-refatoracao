#include "Streaming.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

int main()
{
    std::string tipo; // Variável para armazenar o tipo de vídeo (Filme, Serie)

    Streaming streamingService; // Instância da classe Streaming

    while (std::cin >> tipo) {
        if (tipo == "Filme") {
            std::string nome, genero;
            int ano, duracao;
            std::cin >> genero >> ano >> duracao;
            std::getline(std::cin, nome);

            Video* video;
            video = new Video(nome, ano, genero, tipo, duracao, 0, 0);

            if (duracao >= 50) {
                streamingService.cadastrar_filme(video); // Cadastra o filme no catálogo do serviço de streaming
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
                streamingService.cadastrar_serie(video); // Cadastra a série no catálogo do serviço de streaming
            }
        }

        if (tipo == "Nota") {
            int id, nota;
            std::cin >> id >> nota;

            if (nota >= 0 && nota <= 10) {
                streamingService.avaliacao(id, nota); // Avalia um vídeo do catálogo do serviço de streaming
            }
        }
    }

    streamingService.print_catalogo(); // Imprime o catálogo do serviço de streaming

    return 0;
}
