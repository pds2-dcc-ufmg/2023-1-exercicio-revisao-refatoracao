#ifndef FILME_HPP
#define FILME_HPP

#include <iostream>
#include <list>
#include "Video.hpp"

class Filme : public Video {
private:
    int duracao;

public:
    Filme(std::string nome, int ano, std::string genero, int duracao);
    int get_duracao();
    void print_info(int id);
};

#endif
