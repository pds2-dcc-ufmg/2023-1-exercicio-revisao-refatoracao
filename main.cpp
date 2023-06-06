#include "Streaming.hpp"
#include <iostream>
#include <string>

int main()
{
    Streaming streaming;
    std::string subtipo_video;

    while (std::cin >> subtipo_video)
    {
        if (subtipo_video == "Filme")
        {
            std::string nome, genero;
            int ano, duracao;
            std::cin >> genero >> ano >> duracao;
            std::cin.ignore();
            std::getline(std::cin, nome);

            if (duracao >= 50)
            {
                Video video(nome, ano, genero, subtipo_video, duracao, 0, 0);
                streaming.cadastrar_filme(video);
            }
            else
            {
                std::cout << "Duracao do filme deve ser de pelo menos 50 minutos." << std::endl;
            }
        }
        else if (subtipo_video == "Serie")
        {
            std::string nome, genero;
            int ano, num_temporadas, total_ep;
            std::cin >> genero >> ano >> num_temporadas >> total_ep;
            std::cin.ignore();
            std::getline(std::cin, nome);

            if (total_ep >= 2)
            {
                Video video(nome, ano, genero, subtipo_video, 0, num_temporadas, total_ep);
                streaming.cadastrar_serie(video);
            }
            else
            {
                std::cout << "Serie deve ter pelo menos 2 episodios." << std::endl;
            }
        }
        else if (subtipo_video == "Nota")
        {
            int id, nota;
            std::cin >> id >> nota;

            if (nota >= 0 && nota <= 10)
            {
                streaming.avaliacao(id, nota);
            }
            else
            {
                std::cout << "Nota deve estar entre 0 e 10." << std::endl;
            }
        }
        else
        {
            std::cout << "Comando Invalido." << std::endl;
        }
    }

    streaming.print_catalogo();

    return 0;
}