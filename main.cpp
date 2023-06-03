#include <iostream>
#include <string>
#include <cassert>
#include "Video.hpp"
#include "Streaming.hpp"

int main()
{
    Streaming streaming;
    std::string tipo;

    while (std::cin >> tipo)
    {
        if (tipo == "Filme")
        {
            std::string nome, genero;
            int ano, duracao;
            std::cin >> genero >> ano >> duracao;
            std::cin.ignore();
            std::getline(std::cin, nome);

            assert(duracao >= 50 && "Duração inválida para o filme.");

            Video* v = new Video(nome, ano, genero, tipo, duracao, 0, 0);
            streaming.cadastrar_video(v);
        }
        else if (tipo == "Serie")
        {
            std::string nome, genero;
            int ano, num_temporadas, num_episodios;
            std::cin >> genero >> ano >> num_temporadas >> num_episodios;
            std::cin.ignore();
            std::getline(std::cin, nome);

            assert(num_episodios >= 2 && "Número de episódios inválido para a série.");

            Video* v = new Video(nome, ano, genero, tipo, 0, num_temporadas, num_episodios);
            streaming.cadastrar_video(v);
        }
        else if (tipo == "Nota")
        {
            int id, nota;
            std::cin >> id >> nota;

            assert(nota >= 0 && nota <= 10 && "Nota inválida.");

            streaming.avaliar_video(id, nota);
        }
    }

    streaming.imprimir_catalogo();

    return 0;
}
