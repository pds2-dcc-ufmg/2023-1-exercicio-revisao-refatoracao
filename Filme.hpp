#ifndef FILME_HPP
#define FILME_HPP

#include "Video.hpp"

class Filme : public Video {
public:
    Filme(string nome, int ano, string genero, int duracao);
    void imprimirInfo(int id) override;
};

#endif
