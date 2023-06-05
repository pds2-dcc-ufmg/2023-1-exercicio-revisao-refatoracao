#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

class Video {
private:
int _ano, _filme_duracao, _numero_temporadas, _total_episodios;
std::string _nome, _genero, _subtipo;
std::list<int> avaliacoes;

public:
Video(std::string nome, int ano, std::string genero, std::string subtipo, int filme_duracao, int numero_temporadas, int total_episodios);

float get_media_avaliacao();

void avaliar(int nota);

void print_info(int id);
};

#endif
