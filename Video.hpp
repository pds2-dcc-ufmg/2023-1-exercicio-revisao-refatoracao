#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

using namespace std;

class Video {
protected:
    int _ano;
    string _nome, _genero;
    list<int> avaliacoes;

public:
    Video(string nome, int ano, string genero);
    virtual void print_info(int id) = 0; 
    float get_media_avaliacao();
    void avaliar(int nota);
};

#endif
