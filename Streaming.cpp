#include "Streaming.hpp"

void Streaming::cadastrar_video(Video *v) {
    _catalogo.push_back(v);
}

void Streaming::avaliacao(int id, int nota) {
    if(id > _catalogo.size())
        throw(std::out_of_range("Esse video nao existe!"));

    _catalogo[id - 1]->avaliar(nota);
}

void Streaming::print_catalogo() {
    if(!_catalogo.size())
        std::cout << "Sem video cadastrado!" << std::endl;

    else {
        std::cout << "Catalogo Streaming:" << std::endl;

        int i = 1;

        for(auto video: _catalogo)
            video->print_info(i++);
    }
}