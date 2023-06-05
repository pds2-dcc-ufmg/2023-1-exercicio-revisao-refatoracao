#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

class Video {
protected:
  //ATRIBUTOS
    std::string nome;
    int ano;
    std::string genero;
    std::list<int> avaliacoes;

public:
    //CONSTRUTOR
    Video(std::string nome, int ano, std::string genero);
    float get_media_avaliacao();
    void avaliar(int nota);
    virtual void print_info(int id) = 0;
};

#endif
