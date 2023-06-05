#include "Video.hpp"
#include "Serie.hpp"
#include <string>
#include <iostream>
#include <list>

Serie::Serie(std::string nome, int ano, std::string genero, int numero_temporadas, int total_episodios) : Video::Video(nome, ano, genero), _numero_temporadas(numero_temporadas), _total_episodios(total_episodios) {}

void Serie::print_info(int id){
   std::cout << "Serie " << id << ":";
   std::cout << get_nome()<< " (" ;
   std::cout << get_ano() << "), ";
   std::cout << get_genero() << ", ";
   std::cout << _numero_temporadas << " temporadas, ";
   std::cout << _total_episodios << " episodios, ";
   std::cout << "nota: " << get_media_avaliacao() << std::endl;
}
