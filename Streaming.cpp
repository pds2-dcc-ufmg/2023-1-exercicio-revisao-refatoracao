#include "Streaming.hpp"
#include <iostream>

void Streaming::cadastrar_filme(const Video &video)
{
  catalogo.push_back(std::make_unique<Video>(video));
}

void Streaming::cadastrar_serie(const Video &video)
{
  catalogo.push_back(std::make_unique<Video>(video));
}

void Streaming::avaliacao(int id, int nota)
{
  if (id > 0 && id <= catalogo.size())
  {
    catalogo[id - 1]->avaliar(nota);
  }
  else
  {
    std::cout << "ID de video invalido!" << std::endl;
  }
}

void Streaming::print_catalogo() const
{
  if (catalogo.empty())
  {
    std::cout << "Sem video cadastrado!" << std::endl;
  }
  else
  {
    std::cout << "Catalogo Streaming:" << std::endl;
    int i = 1;
    for (const auto &video : catalogo)
    {
      video->print_info(i);
      i++;
    }
  }
}