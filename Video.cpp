#include "Video.hpp"

Video(string nome, int ano, string genero, string subtipo, int filme_duracao, int n_temp, int total_ep) : nome(nome), ano(ano), genero(genero), subtipo(subtipo), filme_duracao(filme_duracao),n_temp(n_temp), total_ep(total_ep)
{}//Construtor

float Video :: get_media_avaliacao() { //retorna media das avaliacoes
    float v = 0;
    for (auto n : avaliacoes)v += n;
    return v/avaliacoes.size();
  }

void Video :: avaliar(int nota) {//coloca mais uma nota no vetor avaliacoes
  avaliacoes.push_back(nota);
  }

void print_info(int id){ //impressao das informacoes da filme/serie
  if (subtipo == "Filme") 
  {
    std::cout << "Filme " << id << ":" << nome << " (" << ano << "), " << genero << ", " << filme_duracao << " min, " << "nota: " << get_media_avaliacao() << std::endl;
  }

  if (subtipo == "Serie")
  {
    std::cout << "Serie " << id << ":" << nome << " (" << ano << "), " << genero << ", " << n_temp << " temporadas, " << total_ep << " episodios, " << "nota: " << get_media_avaliacao() << std::endl;
  }

}

#endif
