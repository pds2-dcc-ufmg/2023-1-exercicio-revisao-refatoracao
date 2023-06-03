#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

using namespace std;

class Video {
public:
int _ano, _filme_duracao, _n_temp, _total_ep;
string _nome, _genero, _subtipo;
list<int> _avaliacoes;

//Construtor Video

Video(string nome, int ano, string genero, string subtipo, int filme_duracao, int n_temp, int total_ep){
    _nome=nome;
    _ano=ano;
    _genero=genero;
    _subtipo=subtipo;
    _filme_duracao=filme_duracao;
    _n_temp=n_temp;
    _total_ep=total_ep;
};

//Função que retorna a media das avaliações

float get_media_avaliacao(){
    float v = 0;
    for (auto n : _avaliacoes)v += n;
    return v/_avaliacoes.size();
};

//Função para adicionar avaliação

void avaliar(int nota) {
  _avaliacoes.push_back(nota);
};

//Função que retorna as informações de um filme ou serie

void print_info(int id){
  if (_subtipo == "Filme") 
  {
    cout << "Filme " << id << ":";
    cout << _nome;
    cout << " (" << _ano << "), ";
    cout << _genero;
    cout << ", " << _filme_duracao << " min, ";
    cout << "nota: " << get_media_avaliacao() << std::endl;
  }

  if (_subtipo == "Serie")
  {
    cout << "Serie " << id << ":";
    cout << _nome;
    cout << " (" << _ano << "), ";
    cout << _genero << ", ";
    cout << _n_temp << " temporadas, ";
    cout << _total_ep << " episodios, ";
    cout << "nota: " << get_media_avaliacao() << std::endl;
  }
};

};

#endif
