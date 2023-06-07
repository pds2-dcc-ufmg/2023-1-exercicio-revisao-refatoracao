#include <iostream>
#include "Streaming.hpp"

void Streaming::cadastrar_filme(Video *v) {
    catalogo.push_back(v);
}

void Streaming::cadastrar_serie(Video *v) {
    catalogo.push_back(v);
}

void Streaming::avaliacao(int ID, int nota) {
    catalogo[ID - 1]->avaliar(nota);
}

void Streaming::print_catalogo() {
    if (catalogo.size() == 0) {
        std::cout << "Sem video cadastrado!" << std::endl;
    } else {
        std::cout << "Catalogo Streaming:" << std::endl;
        int i = 0;
        for (std::vector<Video*>::iterator it = catalogo.begin(); it != catalogo.end(); it++) {
            (*it)->print_info(i + 1);
            i++;
        }
    }
}
