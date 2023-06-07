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
        int i = 0;
        for (const auto* video : catalogo) {
            video->print_info(i + 1);
            i++;
        }
    }
}
