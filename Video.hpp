#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

using namespace std;

class Video {
private:
    int _ano, _filme_duracao, _n_temp, _total_ep;
    std::string _nome, _genero, _subtipo;
    list<int> avaliacoes;

public:
    Video(std::string nome, int ano, std::string genero, std::string subtipo, int filme_duracao, int n_temp, int total_ep);
    float get_media_avaliacao();
    void avaliar(int nota);
    void print_info(int id);
};
#endif
