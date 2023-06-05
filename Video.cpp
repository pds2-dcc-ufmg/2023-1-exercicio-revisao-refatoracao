#include "Video.hpp"
#include <string>
#include <iostream>
#include <list>

Video::Video(std::string nome, int ano, std::string genero, std::string subtipo, int filme_duracao, int numero_temporadas, int total_episodios) : _nome(nome), _ano(ano), _genero(genero), _subtipo(subtipo), _filme_duracao(filme_duracao), _numero_temporadas(numero_temporadas), _total_episodios(total_episodios) {}

float Video::get_media_avaliacao() {
    float soma_notas = 0;
    for (auto nota : avaliacoes){
      soma_notas += nota;
    }
  
    return soma_notas/avaliacoes.size();
  }

void Video::avaliar(int nota) {
  avaliacoes.push_back(nota);
  }

void Video::print_info(int id){
  if (_subtipo == "Filme") {
    std::cout << "Filme " << id << ":";
    std::cout << _nome << " (";
    std::cout << _ano << "), ";
    std::cout << _genero<< ", ";
    std::cout << _filme_duracao << " min, ";
    std::cout << "nota: " << get_media_avaliacao() << std::endl;
  }

  if (_subtipo == "Serie"){
    std::cout << "Serie " << id << ":";
    std::cout << _nome<< " (" ;
    std::cout << _ano << "), ";
    std::cout << _genero << ", ";
    std::cout << _numero_temporadas << " temporadas, ";
    std::cout << _total_episodios << " episodios, ";
    std::cout << "nota: " << get_media_avaliacao() << std::endl;
  }
}
