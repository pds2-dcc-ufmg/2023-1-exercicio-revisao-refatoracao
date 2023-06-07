#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

class Video {
public:
    int ano, filmeDuracao, numeroTemporadas, totalEpisodios;
    std::string nome, genero, subtipo;
    std::list<int> avaliacoes;

    Video(std::string nome, int ano, std::string genero, std::string subtipo, int filmeDuracao, int numeroTemporadas, int totalEpisodios);

    float get_media_avaliacao();

    void avaliar(int nota);

    void print_info(int id);
};

#endif
