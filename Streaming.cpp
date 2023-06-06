#include "Streaming.hpp"
#include <stdexcept>

void Streaming::cadastrar_filme(Video* filme)
{
  catalogo.push_back(filme);
}

void Streaming::cadastrar_serie(Video* serie)
{
  catalogo.push_back(serie);
}

void Streaming::avaliacao(int id, int nota)
{
  if (id <= 0 || id > catalogo.size()) {
    throw std::invalid_argument("ID do conteúdo inválido");
  }
  if (nota < 0 || nota > 10) {
    throw std::invalid_argument("Nota inválida");
  }
  Video* video = catalogo[id - 1];
  video->avaliar(nota);
}

void Streaming::print_catalogo()
{
  if (catalogo.empty()) {
    std::cout << "Sem vídeo cadastrado!" << std::endl;
  } else {
    std::cout << "Catálogo de Streaming:" << std::endl;
    int i = 1;
    for (Video* video : catalogo) {
      video->print_info(i);
      i++;
    }
  }
}
