#ifndef SERIE_HPP
#define SERIE_HPP

#include "Video.hpp"

class Serie : public Video {
private:
    int numTemporadas;
    int numEpisodios;

public:
    Serie(const std::string nome, int ano, const std::string genero, int numTemporadas, int numEpisodios);

    void imprimirInfo(int id) override;
    float getMediaAvaliacao() override;
    void avaliar(int nota) override;

};

#endif
