#include "Video.hpp"
#include <vector>

class Streaming { 
  private:
    std::vector<Video*> catalogo;
  
  public:
    void cadastrar_filme(Video *video);

    void cadastrar_serie(Video *video);

    void avaliacao(int id, int nota);

    void print_catalogo();
};
