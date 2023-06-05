#ifndef SERIE_HPP
#define SERIE_HPP

#include <iostream>
#include <list>
#include "Video.hpp"

class Serie : public Video {
private:
    int num_temporadas;
    int num_episodios;

public:
    //CONSTRUTOR
    Serie(std::string nome, int ano, std::string genero, int num_temporadas, int num_episodios);
    int get_num_temporadas();
    int get_num_episodios();
    void print_info(int id);
};

#endif
