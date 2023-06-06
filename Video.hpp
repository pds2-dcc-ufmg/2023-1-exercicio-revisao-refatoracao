#ifndef VIDEO_HPP
#define VIDEO_HPP


#include <iostream>
#include <list>


class Video {
  protected:

    std::string _nome, _genero;
    int _ano;
    std::list<int> _avaliacoes;

  public:
    Video(std::string nome, std::string genero, int ano);

    virtual float get_media_avaliacao() = 0;

    virtual void avaliar(int nota) = 0;

    virtual void print_info(int id) = 0;
    
};

#endif
