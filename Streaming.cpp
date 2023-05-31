#include "Streaming.hpp"

void Streaming::cadastrar_filme(Video *v){
    catalogo.push_back(v);
}


void Streaming::cadastrar_serie(Video *v){
    catalogo.push_back(v);
}


void Streaming::avaliacao(int id, int nota) {
    catalogo[id - 1]->avaliar(nota);
}


void Streaming::print_catalogo() {
    if (catalogo.empty()) {
        std::cout << "Sem video cadastrado!" << std::endl;
        return;
    }

    std::cout << "Catalogo Streaming:" << std::endl;
    int i = 1;
    for (Video* v : catalogo) {
        v->print_info(i);
        i++;
    }
}