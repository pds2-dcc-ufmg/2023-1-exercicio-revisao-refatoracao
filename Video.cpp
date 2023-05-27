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
    std::cout << "Filme " << id << ":";
    std::cout << this->nome;
    std::cout << " (" << ano << "), ";
    std::cout << this->genero;
    std::cout << ", " << this->filme_duracao << " min, ";
    std::cout << "nota: " << get_media_avaliacao() << std::endl;
  }

  else if (this->subtipo == "Serie")
  {
    std::cout << "Serie " << id << ":";
    std::cout << this->nome;
    std::cout << " (" << ano << "), ";
    std::cout << this->genero << ", ";
    std::cout << this->n_temp << " temporadas, ";
    std::cout << this->total_ep << " episodios, ";
    std::cout << "nota: " << get_media_avaliacao() << std::endl;
  }
};