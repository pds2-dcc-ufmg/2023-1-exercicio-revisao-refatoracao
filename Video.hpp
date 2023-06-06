// Video.hpp
#ifndef VIDEO_HPP
#define VIDEO_HPP
#include <string>
#include <iostream>
#include <list>

using namespace std;

class Video {
public:
    Video(string nome, int ano, string genero)
        : nome(nome), ano(ano), genero(genero)
    {
    }

    float get_media_avaliacao() {
        float soma = 0;
        for (auto n : avaliacoes) {
            soma += n;
        }
        return soma/avaliacoes.size();
    }

    void avaliar(int nota) {
        avaliacoes.push_back(nota);
    }

    virtual void print_info(int id) = 0; // método virtual puro que deve ser implementado pelas subclasses (Serie e Filme)

protected:
    int ano;
    string nome, genero;
    list<int> avaliacoes;
};

#endif
