#ifndef STREAMING_HPP
#define STREAMING_HPP

#include <vector>
#include "Video.hpp"

class Streaming {
public:
    void cadastrar_filme(Video* v);
    void cadastrar_serie(Video* v);
    void avaliacao(int id, int nota);
    void print_catalogo();

private:
    std::vector<Video*> catalogo;
};

#endif
