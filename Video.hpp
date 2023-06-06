#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

using namespace std;

class Video {
public:
    string nome, genero, subtipo;
    int ano, duracaoFilme, numTemporadas, totalEpisodios;
    list<int> avaliacoes;

    Video(string nome, int ano, string genero, string subtipo, int duracaoFilme, int numTemporadas, int totalEpisodios);
    float calcularMediaAvaliacao();
    void adicionarAvaliacao(int nota);
    virtual void imprimirInfo(int id) = 0; // Método puramente virtual
};

#endif

