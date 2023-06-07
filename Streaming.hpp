#ifndef STREAMING_HPP
#define STREAMING_HPP

#include <iostream>
#include <vector>

#include "Video.hpp"

class Streaming {
public:
    std::vector<Video*> catalogo;

    void cadastrar_filme(Video* v) {
        catalogo.push_back(v);
    }

    void cadastrar_serie(Video* v) {
        catalogo.push_back(v);
    }

    void avaliacao(int id, int nota) {
        if (id > 0 && id <= catalogo.size() && nota >= 0 && nota <= 10) {
            catalogo[id - 1]->avaliar(nota);
        }
    }

    void print_catalogo() {
        if (catalogo.empty()) {
            std::cout << "Sem vídeos cadastrados!" << std::endl;
        }
        else {
            std::cout << "Catálogo de Streaming:" << std::endl;
            int i = 1;
            for (const auto& video : catalogo) {
                video->print_info(i);
                i++;
            }
        }
    }
};

#endif