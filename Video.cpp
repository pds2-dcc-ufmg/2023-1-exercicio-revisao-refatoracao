#include "Video.hpp"

float Video::get_media_avaliacao() {
    float soma = 0;
    for (auto av : this->avaliacoes)
        soma += av;
    return soma/this->avaliacoes.size();
  }

void Video::avaliar(int nota) {
  this->avaliacoes.push_back(nota);
  }

void Video::print_info(int id) {
  if (this->subtipo == "Filme") 
  {
    std::cout
      << "Filme " << id << ":"
      << this->nome
      << " (" << ano << "), "
      << this->genero
      << ", " << this->filme_duracao << " min, "
      << "nota: " << get_media_avaliacao()
      << std::endl;
  }

  else if (this->subtipo == "Serie")
  {
    std::cout
      << "Serie " << id << ":"
      << this->nome
      << " (" << ano << "), "
      << this->genero << ", "
      << this->n_temp << " temporadas, "
      << this->total_ep << " episodios, "
      << "nota: " << get_media_avaliacao()
      << std::endl;
  }
};