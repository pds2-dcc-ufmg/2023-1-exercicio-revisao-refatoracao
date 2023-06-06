#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <list>

class Video {
public:
    int ano, filme_duracao, n_temp, total_ep;
    std::string nome, genero, subtipo;
    std::list<int> avaliacoes;

    Video(std::string nome, int ano, std::string genero, std::string subtipo, int filme_duracao, int n_temp, int total_ep);
    float get_media_avaliacao();
    void avaliar(int nota);
    void print_info(int id);
};

#endif