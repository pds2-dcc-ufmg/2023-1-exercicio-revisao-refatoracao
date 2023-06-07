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

void Streaming::print_catalogo() const {
    if (catalogo.empty()) {
        std::cout << "Sem video cadastrado!" << std::endl;
    } else {
        std::cout << "Catalogo Streaming:" << std::endl;
        for (std::vector<Video*>::const_iterator it = catalogo.begin(); it != catalogo.end(); it++) {
            (*it)->print_info(it - catalogo.begin() + 1);
        }
    }
}
