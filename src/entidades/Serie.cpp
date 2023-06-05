#include "Serie.hpp"

void Serie::print_info(int id) {
    std::cout
      << "Serie " << id << ":"
      << get_nome()
      << " (" << get_ano() << "), "
      << get_genero() << ", "
      << n_temp << " temporadas, "
      << this->total_ep << " episodios, "
      << "nota: " << get_media_avaliacao()
      << std::endl;
}