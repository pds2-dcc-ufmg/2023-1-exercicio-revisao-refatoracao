#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

using namespace std;

class Video 
{
  private:
    string nome, genero, subtipo;
    int ano, filme_duracao, n_temp, total_ep;
    list<int> avaliacoes;
  public:
    Video(string nome, int ano, string genero, string subtipo, int filme_duracao, int n_temp, int total_ep): 
      nome(nome), ano(ano), genero(genero), subtipo(subtipo), filme_duracao(filme_duracao),n_temp(n_temp), total_ep(total_ep) {};
    float get_media_avaliacao();
    void avaliar(int nota);
    void print_info(int id);
};

#endif
