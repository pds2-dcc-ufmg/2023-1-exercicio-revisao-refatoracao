#ifndef SERIE_HPP
#define SERIE_HPP

#include "Video.hpp"

class Serie : public Video {
private:
    int num_temporadas;
    int num_episodios;

public:
    Serie(std::string nome, int ano, std::string genero, int num_temporadas, int num_episodios);

    void print_info(int id) override;
};

#endif
