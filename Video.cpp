#include "Video.hpp"

Video::Video(std::string nome, std::string genero, std::string subtipo,
             int ano, int filme_duracao, int n_temp, int total_ep) :
            _nome(nome), _genero(genero), _subtipo(subtipo),
            _ano(ano), _filme_duracao(filme_duracao), _n_temp(n_temp), _total_ep(total_ep) {}


float Video::get_media_avaliacao() {
    float v = 0;
    for (unsigned int n : _avaliacoes)
        v += (float) n;

    return v/(float) _avaliacoes.size();
}


void Video::avaliar(unsigned int nota) {
    _avaliacoes.push_back(nota);
}

void Video::simples(){
    for (unsigned int n : _avaliacoes)
        std::cout << n << std::endl;
}

void Video::print_info(unsigned int id){

    if (_subtipo == "Filme") {
        std::cout << "Filme " << id << ":"
                  << _nome
                  << " (" << _ano << "), "
                  << _genero
                  << ", " << _filme_duracao << " min, "
                  << "nota: " << this->get_media_avaliacao() << std::endl;
    }

    if (_subtipo == "Serie") {
        std::cout << "Serie " << id << ":"
                  << _nome
                  << " (" << _ano << "), "
                  << _genero << ", "
                  << _n_temp << " temporadas, "
                  << _total_ep << " episodios, "
                  << "nota: " << this->get_media_avaliacao() << std::endl;
    }
    
}