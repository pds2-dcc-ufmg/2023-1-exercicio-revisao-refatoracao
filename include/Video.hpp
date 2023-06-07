#ifndef VIDEO_HPP
#define VIDEO_HPP
#include <string>
#include <iostream>
#include <list>
#include <vector>

class Video 
{
  protected:
    std::string nome, genero;
    int ano;
    std::list<int> avaliacoes;
  public:
    Video(std::string nome, int ano, std::string genero): 
      nome(nome), ano(ano), genero(genero) {};
    float get_media_avaliacao();
    void avaliar(int nota);
    virtual void print_info(int id) = 0;
};

#endif
