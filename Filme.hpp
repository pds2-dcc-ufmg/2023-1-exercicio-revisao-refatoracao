#ifndef FILME_HPP
#define FILME_HPP

#include <string>
#include <iostream>
#include "Video.hpp"

using namespace std;

class Filme : public Video {
private:
    int _filme_duracao;

public:
    Filme(string nome, int ano, string genero, int filme_duracao);
    void print_info(int id) override;
};

#endif
