#include "Streaming.hpp"

Streaming::Streaming() {}

void Streaming::cadastrar_video(Video* video) {
    _catalogo.push_back(video);
}

void Streaming::avaliacao(int id, int nota) {
    _catalogo[id - 1]->avaliar(nota);
}

void Streaming::print_catalogo() {
    if (_catalogo.empty()) {
        std::cout << "Sem vídeos cadastrados!" << std::endl;
    } else {
        std::cout << "Catálogo de Streaming:" << std::endl;
        int index = 1;
        for (std::vector<Video*>::iterator it = _catalogo.begin(); it != _catalogo.end(); it++) {
            (*it)->print_info(index + 1);
            index++;
        }
    }
}