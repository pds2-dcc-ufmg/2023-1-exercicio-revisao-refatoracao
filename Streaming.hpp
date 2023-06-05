#ifndef STREAMING_HPP
#define STREAMING_HPP

#include <iostream>
#include <vector>
#include "Filme.hpp"
#include "Serie.hpp"

class Streaming {
private:
    //ATRIBUTOS
    std::vector<Video*> catalogo;

public:
    //MÉTODOS
    void cadastrar_filme(Filme* f);
    void cadastrar_serie(Serie* s);
    void avaliar(int id, int nota);
    void print_catalogo();
};

#endif
