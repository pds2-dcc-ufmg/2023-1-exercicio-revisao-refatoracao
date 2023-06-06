#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

class Video {
private:
int ano, filme_duracao, n_temp, total_ep;
string nome, genero, subtipo;
list<int> avaliacoes;
    
public:

Video(string nome, int ano, string genero, string subtipo, int filme_duracao, int n_temp, int total_ep);

float get_media_avaliacao();

void avaliar(int nota);

void print_info(int id);

};

#endif
