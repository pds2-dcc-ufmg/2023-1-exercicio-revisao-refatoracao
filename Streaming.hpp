#ifndef STREAMING_HPP
#define STREAMING_HPP

#include <string>
#include <vector>
#include "Video.hpp"

class Streaming {
public:
    std::vector<Video*> catalogo; // armazenar video

    void cadastrar_filme(Video* v); // cadastrar video
    void cadastrar_serie(Video* v); // série
    void avaliacao(int id, int nota); // guardar a avaliacao
    void print_catalogo();
};

#endif  // STREAMING_HPP
