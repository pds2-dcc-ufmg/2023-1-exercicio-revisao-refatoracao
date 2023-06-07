#include "Filme.hpp"

void Filme::print_info(int id)
{
    std::cout << "Filme " << id << ":"
        << this->nome
        << " (" << this->ano << "), "
        << this->genero << ", " 
        << this->filme_duracao << " min, "
        << "nota: " << this->get_media_avaliacao() 
        << std::endl;
}