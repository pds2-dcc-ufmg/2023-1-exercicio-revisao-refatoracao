#include "Serie.hpp"

Serie::Serie(std::string nome, int ano, std::string genero, int num_temporadas, int num_episodios)
    : Video(nome, ano, genero), num_temporadas(num_temporadas), num_episodios(num_episodios) {}

int Serie::get_num_temporadas() {
    return num_temporadas;
}

int Serie::get_num_episodios() {
    return num_episodios;
}

void Serie::print_info(int id) {
    std::cout << "Serie " << id << ": " << nome << " (" << ano << "), " << genero << ", "
              << num_temporadas << " temporadas, " << num_episodios << " episodios, nota: "
              << get_media_avaliacao() << std::endl;
}
