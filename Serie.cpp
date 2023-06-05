#include "Serie.hpp"

//Construtor
Serie::Serie(std::string nome, int ano, std::string genero, int n_temp, int total_ep)
    : Video(nome, ano, genero), _n_temp(n_temp), _total_ep(total_ep)
{}

//Destrutor
Serie::~Serie()
{}


// Imprime as informações da série
void Serie::print_info(int id) {
    std::cout << "Serie " << id << ": " << _nome << " (" << _ano << "), " << _genero << ", ";
    std::cout << _n_temp << " temporadas, " << _total_ep << " episodios, ";
    std::cout << "nota: " << get_media_avaliacao() << std::endl;
}