#include <string>
#include <iostream>
#include "Serie.hpp"

using namespace std;

Serie::Serie(string nome, int ano, string genero, int num_temporadas, int num_episodios) :
    Video(nome, ano, genero), num_temporadas(num_temporadas), num_episodios(num_episodios) {
}

void Serie::print_info(int id) {
    cout << "Serie " << id << ": " << get_nome() << " (" << get_ano() << "), " << get_genero() << ", ";
    cout << num_temporadas << " temporadas, " << num_episodios << " episodios, ";
    cout << "nota: " << get_media_avaliacao() << std::endl;
}
