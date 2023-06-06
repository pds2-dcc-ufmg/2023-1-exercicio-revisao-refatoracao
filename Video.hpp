#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

class Video {
public:
    Video(std::string nome, int ano, std::string genero, std::string subtipo, int filme_duracao, int n_temp, int total_ep);

    std::string get_nome() const;
    int get_ano() const;
    std::string get_genero() const;
    std::string get_subtipo() const;
    int get_filme_duracao() const;
    int get_n_temp() const;
    int get_total_ep() const;
    float get_media_avaliacao() const;

    void avaliar(int nota);

    void print_info(int id) const;

private:
    std::string nome;
    int ano;
    std::string genero;
    std::string subtipo;
    int filme_duracao;
    int n_temp;
    int total_ep;
    std::list<int> avaliacoes;
};

#endif
