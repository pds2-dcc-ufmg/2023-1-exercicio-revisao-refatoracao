#include "Streaming.hpp"


void Streaming::cadastrar_filme(Filme* filme) {
    catalogo.push_back(filme);
}

void Streaming::cadastrar_serie(Serie* serie) {
    catalogo.push_back(serie);
}

void Streaming::avaliacao(int id, int nota) {
    if (id > 0 && id <= catalogo.size()) {
        catalogo[id - 1]->avaliar(nota);
    }
}

void Streaming::print_catalogo() {
    if (catalogo.empty()) {
        std::cout << "Sem filme/serie cadastrado!" << std::endl;
    } else {
        std::cout << "Catalogo Streaming:" << std::endl;
        int i = 0;
        for (std::vector<Video*>::iterator it = catalogo.begin(); it != catalogo.end(); it++) {
            (*it)->print_info(i + 1);
            i++;
        }
    }
}
