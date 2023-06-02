#define id_para_vector(id) id-1


#include "Streaming.hpp"


void Streaming::cadastrar(Video *v){
    _catalogo.push_back(v);
}


void Streaming::avaliacao(unsigned int id, unsigned int nota) {
    _catalogo[id_para_vector(id)]->avaliar(nota);
}


void Streaming::print_catalogo() {
    if (_catalogo.empty()) {
        std::cout << "Sem video cadastrado!" << std::endl;
        return;
    }

    std::cout << "Catalogo Streaming:" << std::endl;
    unsigned int i = 1;
    for (Video* v : _catalogo) {
        v->print_info(i);
        i++;
    }
}
