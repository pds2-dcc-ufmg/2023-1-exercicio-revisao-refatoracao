#ifndef STREAMING_HPP
#define STREAMING_HPP


#include <vector>

#include "Video.hpp"


class Streaming { 
  private:

    std::vector<Video*> _catalogo;

  public:

    void cadastrar(Video *v);


    void avaliacao(unsigned int id, unsigned int nota);


    void print_catalogo();
    
};

#endif
