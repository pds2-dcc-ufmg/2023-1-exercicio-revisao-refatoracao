#include "Streaming.hpp"
#define mapear_id(id) (id - 1)



void Streaming::cadastrar_video(Video* video) {
    _catalogo.push_back(video);
}

void Streaming::avaliar_video(unsigned int id, unsigned int nota) {
    _catalogo[mapear_id(id)]->adicionar_avaliacao(nota);
}

void Streaming::imprimir_catalogo() {
    if (_catalogo.empty()) {
        std::cout << "Nenhum vídeo cadastrado!" << std::endl;
        return;
    }

    std::cout << "Catálogo de Streaming:" << std::endl;
    unsigned int id = 1;
    for (Video* video : _catalogo) {
        video->imprimir_informacoes(id);
        id++;
    }
}
