#include "Streaming.hpp"

void Streaming::cadastrar(Video *v) {
    catalogo.push_back(v);
}


void Streaming::avaliacao(int id, int nota) {
    catalogo[id - 1]->avaliar(nota);
}


void Streaming::print_catalogo() {
    if (catalogo.empty()) {
      std::cout << "Sem video cadastrado!" << std::endl;
    }
    else {
      std::cout << "Catalogo Streaming:" << std::endl;
      int i = 1;
      for (std::vector<Video*>::iterator it = catalogo.begin(); it != catalogo.end(); it++) {
        (*it)->print_info(i);
        i++;
      }
    }
  }
