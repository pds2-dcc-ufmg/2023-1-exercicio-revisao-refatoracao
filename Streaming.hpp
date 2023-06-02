#ifndef STREAMING_HPP
#define STREAMING_HPP
#include <string>
#include <vector>
#include "Video.hpp"

class Streaming 
{ 
  private:
    std::vector<Video*> catalogo;
  public:
    void cadastrar_video(Video *video);
    void avaliacao(int id, int nota);
    void print_catalogo();
};

#endif
