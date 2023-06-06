#include "Streaming.hpp"

void Streaming :: cadastrar_tudo(Video *v){
  catalogo.push_back(v); 
} //cadastra os filmes e series, visto que ambos vao para o mesmo vetor

void Streaming::avaliacao(int id, int nota) {
  catalogo[id - 1]->avaliar(nota);
} //usa o metodo "avaliar" de "Video" para avaliar os filmes e series


void Streaming :: print_catalogo(){ //imprime as informacoes do catalogo atraves do metodo print info(). Se o vetor estiver vazio imprime outra mensagem
  if (catalogo.size()==0){
    std::cout << "Sem video cadastrado!" << std::endl;
  }else {
    std::cout << "Catalogo Streaming:" << std::endl;
    int i = 0;
    for (std::vector<Video*>::iterator it = catalogo.begin(); it != catalogo.end(); it++) {
      (*it)->print_info(i + 1);
      it++;
    }
  }
}

