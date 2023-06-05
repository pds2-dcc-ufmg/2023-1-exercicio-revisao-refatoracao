#include "Filme.hpp"

void Filme::print_info(int id) {
    std::cout
        << "Filme " << id << ":"
        << get_nome()
        << " (" << get_ano() << "), "
        << get_genero()
        << ", " << this->filme_duracao << " min, "
        << "nota: " << get_media_avaliacao()
        << std::endl;
}