#include "Video.hpp"

Video::Video(std::string _nome, int _ano, std::string _genero, std::string _subtipo, int _filme_duracao, int _n_temp, int _total_ep)
    : nome(_nome), ano(_ano), genero(_genero), subtipo(_subtipo), filme_duracao(_filme_duracao), n_temp(_n_temp), total_ep(_total_ep) {
}
float Video::get_media_avaliacao() {
    float v = 0;
    for (auto n : avaliacoes)
        v += n;
    return v / avaliacoes.size();
}

void Video::avaliar(int nota) {
    avaliacoes.push_back(nota);
}

void Video::print_info(int id) {
    if (subtipo == "Filme") {
        std::cout << "Filme " << id << ":";
        std::cout << nome;
        std::cout << " (" << ano << "), ";
        std::cout << genero;
        std::cout << ", " << filme_duracao << " min, ";
        std::cout << "nota: " << get_media_avaliacao() << std::endl;
    }

    if (subtipo == "Serie") {
        std::cout << "Serie " << id << ":";
        std::cout << nome;
        std::cout << " (" << ano << "), ";
        std::cout << genero << ", ";
        std::cout << n_temp << " temporadas, ";
        std::cout << total_ep << " episodios, ";
        std::cout << "nota: " << get_media_avaliacao() << std::endl;
    }
}