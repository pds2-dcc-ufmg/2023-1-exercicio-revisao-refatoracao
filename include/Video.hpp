#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

class Video {
  private:
    int ano;
    std::string nome, genero;
    std::list<int> avaliacoes;

  public:
    Video(std::string nome, int ano, std::string genero) : 
      ano(ano), nome(nome), genero(genero) {}

    float get_media_avaliacao();

    void avaliar(int nota);

    void virtual print_info(int id) = 0;

    int get_ano();
    std::string get_nome();
    std::string get_genero();
};

#endif
