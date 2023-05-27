#include "Video.hpp"
#include <vector>

class Streaming { 
  private:
    std::vector<Video*> catalogo;
  
  public:
    void cadastrar_filme(Video *v);

    void cadastrar_serie(Video *v);

    void avaliacao(int id, int nota);

    void print_catalogo();
};
