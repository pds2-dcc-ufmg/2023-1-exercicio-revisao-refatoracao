#ifndef SERIE_HPP
#define SERIE_HPP

#include "Video.hpp"

class Serie : public Video {
public:
    Serie(string nome, int ano, string genero, int numero_temporadas, int total_episodios);
    void print_info(int id) override;
private:
    int numero_temporadas;
    int total_episodios;
};

#endif
