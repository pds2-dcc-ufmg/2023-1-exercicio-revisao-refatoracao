#include "Serie.hpp"



Serie::Serie(std::string nome, std::string genero, int ano, int n_temp, int total_ep):
            Video(nome, genero, ano), _n_temp(n_temp), _total_ep(total_ep) {}


Serie::~Serie(){}

float Serie::get_media_avaliacao() {
    float v = 0;
    for (unsigned int n : _avaliacoes)
        v += (float) n;

    return v/(float) _avaliacoes.size();
}


void Serie::avaliar(unsigned int nota) {
    _avaliacoes.push_back(nota);
}


void Serie::print_info(unsigned int id) {
    std::cout << "Serie " << id << ":"
            << _nome
            << " (" << _ano << "), "
            << _genero << ", "
            << _n_temp << " temporadas, "
            << _total_ep << " episodios, "                   
            << "nota: " << this->get_media_avaliacao() << std::endl;
}