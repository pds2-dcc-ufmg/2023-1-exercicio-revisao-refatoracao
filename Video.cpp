#include "Video.hpp"
#include <string>
#include <iostream>
#include <list>

Video::Video(std::string nome, int ano, std::string genero) : _nome(nome), _ano(ano),_genero(genero){}

std::string Video::get_nome(){
  return _nome;
}

int Video::get_ano(){
  return _ano;
}

std::string Video::get_genero(){
  return _genero;
}

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

void Video::print_info(int id){}
