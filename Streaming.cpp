#include "Streaming.hpp"
#include <iostream>

void Streaming::cadastrarVideo(Video* video)
{
    catalogo.push_back(video);
}

void Streaming::avaliarVideo(int id, int nota) {
    if (id > 0 && id <= catalogo.size()) {
        catalogo[id - 1]->avaliar(nota);
    }
}

void Streaming::imprimirCatalogo()
{
    if (catalogo.empty()) {
        std::cout << "Sem vídeos cadastrados!" << std::endl;
    }
    else {
        std::cout << "Catálogo de Streaming:" << std::endl;
        for (int i = 0; i < catalogo.size(); i++) {
            catalogo[i]->imprimirInfo(i + 1);
        }
    }
}

Streaming::~Streaming() {
    for (Video* video : catalogo) {
        delete video;
    }
    catalogo.clear();
}
