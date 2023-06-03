#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <iostream>
#include <list>
#include <string>
#include <cassert>

class Video {
private:
    std::string nome;
    int ano;
    std::string genero;
    std::string subtipo;
    int duracao;
    int num_temporadas;
    int num_episodios;
    std::list<int> avaliacoes;

public:

    Video(std::string nome, int ano, std::string genero, std::string subtipo, int duracao, int num_temporadas, int num_episodios)
        : nome(nome), ano(ano), genero(genero), subtipo(subtipo), duracao(duracao), num_temporadas(num_temporadas), num_episodios(num_episodios)
    {}

    float calcular_media_avaliacao() const;

    void avaliar(int nota);

    void imprimir_info(int id) const;
};

#endif
