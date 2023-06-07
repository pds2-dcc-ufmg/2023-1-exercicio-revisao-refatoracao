#ifndef SERIE_HPP
#define SERIE_HPP

#include "Video.hpp"

class Serie : public Video {
public:
    Serie(string nome, int ano, string genero, int numTemporadas, int totalEpisodios);
    void imprimirInfo(int id) override;
};

#endif
