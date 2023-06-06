#include "Streaming.hpp"
#include <iostream>

void Streaming::cadastrar_filme(Video* videos)
{
    catalogo.push_back(videos);
}

void Streaming::cadastrar_serie(Video* videos)
{
    catalogo.push_back(videos);
}

void Streaming::avaliacao(int id, int nota)
{
    if (id >= 1 && id <= catalogo.size()) {
        catalogo[id - 1]->avaliar(nota);
    }
}

void Streaming::print_catalogo()
{
    if (catalogo.empty()) {
        std::cout << "Sem vídeo cadastrado!" << std::endl;
    } else {
        std::cout << "Catálogo de Streaming:" << std::endl;
        int i = 1;
        for (Video* video : catalogo) {
            video->print_info(i);
            i++;
        }
    }
}
