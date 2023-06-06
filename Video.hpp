#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

class Video {
public:
    int ano, filme_duracao, n_temp, total_ep;
    std::string nome, genero, subtipo;
    std::list<int> avaliacoes;

    Video(std::string _nome, int _ano, std::string _genero, std::string _subtipo, int _filme_duracao, int _n_temp, int _total_ep);

    float get_media_avaliacao();
    void avaliar(int nota);
    void print_info(int id);
};

#endif  // VIDEO_HPP
