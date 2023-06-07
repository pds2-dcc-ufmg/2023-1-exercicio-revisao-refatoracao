#include "Serie.hpp"

void Serie::print_info(int id)
{
    std::cout << "Serie " << id << ":"
        << this->nome
        << " (" << this->ano << "), "
        << this->genero << ", "
        << this->numero_temporada << " temporadas, "
        << this->numero_episodio << " episodios, "
        << "nota: " << this->get_media_avaliacao()
        << std::endl;
}