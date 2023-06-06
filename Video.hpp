#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

class Video {

private:
std::string nome;
int ano;
std::string genero, subtipo;
int filme_duracao, n_temp, total_ep, nota, id;
std::list<int> avaliacoes;
   
public:

Video(std::string nome, int ano, std :: string genero, std::string subtipo, int filme_duracao, int n_temp, int total_ep);

float get_media_avaliacao();

void avaliar(int nota);

void print_info(int id);

};

#endif
