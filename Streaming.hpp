#ifndef STREAMING_HPP
#define STREAMING_HPP

#include <string>
#include <vector>

#include "Video.hpp"

class Streaming {
public:
    std::vector<Video*> catalogo;

    void cadastrar_filme(Video *v);

    void cadastrar_serie(Video *v);

    void avaliacao(int ID, int nota);

    void print_catalogo() const;
};

#endif
