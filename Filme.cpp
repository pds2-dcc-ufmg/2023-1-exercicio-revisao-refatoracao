#include "Video.hpp"
#include "Filme.hpp"
#include <string>
#include <iostream>
#include <list>

Filme::Filme(std::string nome, int ano, std::string genero, int filme_duracao) : Video::Video(nome, ano, genero), _filme_duracao(filme_duracao) {}

void Filme::print_info(int id){
   std::cout << "Filme " << id << ":";
   std::cout << get_nome() << " (";
   std::cout << get_ano() << "), ";
   std::cout << get_genero() << ", ";
   std::cout << _filme_duracao << " min, ";
   std::cout << "nota: " << get_media_avaliacao() << std::endl;
  
}
