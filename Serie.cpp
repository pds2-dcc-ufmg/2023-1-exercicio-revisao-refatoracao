#include "Serie.hpp"

Serie::Serie(string nome, int ano, string genero, int numero_temporadas, int total_episodios)
    : Video(nome, ano, genero), numero_temporadas(numero_temporadas), total_episodios(total_episodios)
{
    if (total_episodios < 2) {
        throw std::invalid_argument("Uma série deve ter pelo menos 2 episódios.");
    }
}

void Serie::print_info(int id) {
    cout << "Serie " << id << ": " << nome << " (" << ano << "), " << genero << ", " << numero_temporadas << " temporadas, " << total_episodios << " episodios, nota: " << get_media_avaliacao() << std::endl;
}