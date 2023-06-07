#ifndef FILME_HPP
#define FILME_HPP
#include <string>
#include <iostream>

#include "Video.hpp"

class Filme : public Video {
private:
    int duracao;

public:
    Filme(std::string nome, int ano, std::string genero, int duracao);
    void print_info(int id) override;
    int get_duracao;
};

#endif
