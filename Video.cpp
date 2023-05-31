#include "Video.hpp"

Video::Video(std::string nome, int ano, std::string genero, std::string subtipo, int filme_duracao, int n_temp, int total_ep) : nome(nome), ano(ano), genero(genero), subtipo(subtipo), filme_duracao(filme_duracao),n_temp(n_temp), total_ep(total_ep)
    {
    }


float Video::get_media_avaliacao() {
    float v = 0;
    for (int n : avaliacoes)
        v += n;

    return v/avaliacoes.size();
}


void Video::avaliar(int nota) {
    avaliacoes.push_back(nota);
}

void Video::simples(){
    for (int n : avaliacoes)
    std::cout << n << std::endl;
}

void Video::print_info(int id){

    if (subtipo == "Filme") {
        std::cout << "Filme " << id << ":"
                << nome
                << " (" << ano << "), "
                << genero
                << ", " << filme_duracao << " min, "
                << "nota: " << this->get_media_avaliacao() << std::endl;
    }

    if (subtipo == "Serie") {
        std::cout << "Serie " << id << ":"
                << nome
                << " (" << ano << "), "
                << genero << ", "
                << n_temp << " temporadas, "
                << total_ep << " episodios, "
                << "nota: " << this->get_media_avaliacao() << std::endl;
    }
    
}