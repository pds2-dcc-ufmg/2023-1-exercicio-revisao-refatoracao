#ifndef STREAMING_HPP
#define STREAMING_HPP

#include "Video.hpp"
#include <vector>

class Streaming {
public:
    std::vector<Video*> catalogo;

    void cadastrar_filme(Video* video);
    void cadastrar_serie(Video* video);
    void avaliacao(int id, int nota);
    void print_catalogo();
};

#endif