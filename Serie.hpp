#ifndef SERIE_HPP
#define SERIE_HPP

#include "Video.hpp"

class Serie : public Video {
private:
    int _num_temporadas;
    int _num_episodios;

public:
    Serie(std::string nome, std::string genero, int ano, int num_temporadas, int num_episodios);
    ~Serie();

    float calcular_media_avaliacao();
    void adicionar_avaliacao(unsigned int nota);
    void imprimir_informacoes(unsigned int id);
};

#endif
