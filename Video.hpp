#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <list>

class Video
{
private:
  int _ano;
  int _filme_duracao;
  int _n_temp;
  int _total_ep;

  std::string _nome;
  std::string _genero;
  std::string _subtipo;

  std::list<int> _avaliacoes;

public:
  Video(const std::string &nome, int ano, const std::string &genero, const std::string &subtipo, int filme_duracao, int n_temp, int total_ep);

  float get_media_avaliacao() const;
  void avaliar(int nota);
  void print_info(int id) const;
};

#endif