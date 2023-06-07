#ifndef FILME_HPP
#define FILME_HPP

#include "Video.hpp"

class Filme : public Video {
private:
    int _duracao;

public:
    Filme(std::string nome, std::string genero, int ano, int duracao);
    ~Filme();

    float calcular_media_avaliacao();
    void adicionar_avaliacao(unsigned int nota);
    void imprimir_informacoes(unsigned int id);
};

#endif
