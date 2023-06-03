#include <string>
#include <iostream>
#include "Serie.hpp"

using namespace std;

Serie::Serie(string nome, int ano, string genero, int n_temp, int total_ep) :
    Video(nome, ano, genero), _n_temp(n_temp), _total_ep(total_ep) {
}

void Serie::print_info(int id) {
    cout << "Serie " << id << ": " << _nome << " (" << _ano << "), " << _genero << ", ";
    cout << _n_temp << " temporadas, " << _total_ep << " episodios, ";
    cout << "nota: " << get_media_avaliacao() << std::endl;
}
