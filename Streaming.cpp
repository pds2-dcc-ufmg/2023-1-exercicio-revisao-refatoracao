#include "Streaming.hpp"
#include <string>
#include <vector>

void Streaming::cadastrar_filme(Video *filme){
  catalogo.push_back(filme);
}

void Streaming::cadastrar_serie(Video *serie){
  catalogo.push_back(serie);
}

void Streaming::avaliacao(int id, int nota){
  catalogo[id - 1]->Video::avaliar(nota);
}


void Streaming::print_catalogo(){
  if (catalogo.size()==0){
    std::cout << "Sem video cadastrado!" << std::endl;
  }
  else {
    std::cout << "Catalogo Streaming:" << std::endl;
    int id = 1;
    for (std::vector<Video*>::iterator it = catalogo.begin(); it != catalogo.end(); it++) {
      (*it)->print_info(id);
      id++;
    }
  }
}
