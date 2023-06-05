#include "Streaming.hpp"
#include "Video.hpp"
#include "Filme.hpp"
#include "Serie.hpp"
#include <string>
#include <vector>

void Streaming::cadastrar_filme(Filme* filme){
  catalogo.push_back(filme);
}

void Streaming::cadastrar_serie(Serie* serie){
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

//método para limpar a memória
void Streaming::limpar_catalogo() {
    for (Video* video : catalogo) {
      delete video;
    }
    catalogo.clear();
  }
