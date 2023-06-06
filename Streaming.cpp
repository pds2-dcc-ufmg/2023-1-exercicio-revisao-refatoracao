#include "Streaming.hpp"

void Streaming::cadastrar_video(Video *v) {
    _catalogo.push_back(v);
}

void Streaming::avaliacao(int id, int nota) {
    _catalogo[id - 1]->avaliar(nota);
}

void Streaming::print_catalogo() {
    if(!_catalogo.size())
        std::cout << "Sem video cadastrado!" << std::endl;

    else {
        std::cout << "Catalogo Streaming:" << std::endl;

        for(int i = 0; i < _catalogo.size(); i++)
            _catalogo[i]->print_info(i + 1);
    }
}