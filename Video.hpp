#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

using namespace std;

class Video {
  private:
    int _ano, _filme_duracao, _n_temp, _total_ep;
    string _nome, _genero, _subtipo;
    list<int> avaliacoes;

  public:
    Video(string nome, int ano, string genero, string subtipo, int filme_duracao, int n_temp, int total_ep);

    float get_media_avaliacao();

    void avaliar(int nota);

    void print_info(int id);
};

#endif
