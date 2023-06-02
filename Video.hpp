#ifndef VIDEO_HPP
#define VIDEO_HPP
#include <string>
#include <iostream>
#include <list>

class Video 
{
  private:
    std::string nome, genero, subtipo;
    int ano, filme_duracao, numero_temporada, numero_episodio;
    std::list<int> avaliacoes;
  public:
    Video(std::string nome, int ano, std::string genero, std::string subtipo, int filme_duracao, int numero_temporada, int numero_episodio): 
      nome(nome), ano(ano), genero(genero), subtipo(subtipo), filme_duracao(filme_duracao),numero_temporada(numero_temporada), numero_episodio(numero_episodio) {};
    float get_media_avaliacao();
    void avaliar(int nota);
    void print_info(int id);
};

#endif
