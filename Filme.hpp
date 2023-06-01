#ifndef FILME_HPP
#define FILME_HPP


#include "Video.hpp"


class Filme : public Video {
  private:

    int _filme_duracao;

  public:

    Filme(std::string nome, std::string genero, int ano, int filme_duracao);
    
    ~Filme();

    float get_media_avaliacao() override;


    void avaliar(unsigned int nota) override;


    void print_info(unsigned int id) override;
  
};


#endif
