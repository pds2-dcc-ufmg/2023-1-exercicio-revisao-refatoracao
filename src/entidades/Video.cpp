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

int Video::get_ano() {
 return this->ano;
}

std::string Video::get_nome() {
  return this->nome;
}

std::string Video::get_genero() {
  return this->genero;
}