#ifndef STREAMING_HPP
#define STREAMING_HPP

#include <iostream>
#include <string>
#include <vector>

#include "Video.hpp"
#include "Serie.hpp"
#include "Filme.hpp"

class Streaming {
public:
    std::vector<Video*> catalogo;

    void cadastrar_filme(Filme* filme);
    void cadastrar_serie(Serie* serie);
    void avaliacao(int id, int nota);
    void print_catalogo();
};

#endif
