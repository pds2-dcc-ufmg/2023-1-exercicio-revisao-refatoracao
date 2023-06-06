#include "Streaming.hpp"
#include <iostream>

void Streaming::cadastrar_filme(Video* v)
{
    catalogo.push_back(v);
}

void Streaming::cadastrar_serie(Video* v)
{
    catalogo.push_back(v);
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
    }
    else {
        std::cout << "Catálogo de Streaming:" << std::endl;
        int i = 0;
        for (auto it = catalogo.begin(); it != catalogo.end(); it++) {
            (*it)->print_info(i + 1);
            i++;
        }
    }
}