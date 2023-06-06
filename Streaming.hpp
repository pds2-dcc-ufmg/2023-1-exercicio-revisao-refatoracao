#include "Video.hpp"
#include <vector>


class Streaming {    
private:
std::vector<Video*> catalogo;

public:

void cadastrar_tudo(Video *v);

void avaliacao(int id, int nota);

void print_catalogo();
};
