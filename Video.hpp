#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <iostream>
#include <list>

class Video {
protected:
    std::list<unsigned int> _avaliacoes;
    std::string _nome, _genero;
    int _ano;

public:
    Video(std::string nome, std::string genero, int ano);
    virtual ~Video();

    virtual float calcular_media_avaliacao() = 0;
    virtual void adicionar_avaliacao(unsigned int nota) = 0;
    virtual void imprimir_informacoes(unsigned int id) = 0;
};

#endif
