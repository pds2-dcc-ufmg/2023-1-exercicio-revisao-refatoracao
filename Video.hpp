#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

class Video {
private:
int _ano;
std::string _nome, _genero;
std::list<int> avaliacoes;

public:
float get_media_avaliacao();

void avaliar(int nota);

virtual void print_info(int id);
};

#endif
