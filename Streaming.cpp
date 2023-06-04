#include "Streaming.hpp"

void Streaming::cadastrar_video(Video* video) {
    catalogo.push_back(video);
}

void Streaming::avaliacao(int id, int nota) {
    catalogo[id - 1]->avaliar(nota);
}

void Streaming::print_catalogo() {
    if (catalogo.empty()) {
        std::cout << "Sem vídeos cadastrados!" << std::endl;
    } else {
        std::cout << "Catálogo de Streaming:" << std::endl;
        int index = 1;
        for (auto video : catalogo) {
            video->print_info(index++);
        }
    }
}
