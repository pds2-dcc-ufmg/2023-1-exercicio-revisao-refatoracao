#ifndef STREAMING_HPP
#define STREAMING_HPP

#include "Video.hpp"
#include "Filme.hpp"
#include "Serie.hpp"

#include <vector>


class Streaming { 
  private:

    std::vector<Video*> catalogo;

  public:

    void cadastrar(Video *v);


    void avaliacao(int id, int nota);


    void print_catalogo();
    
};

#endif
