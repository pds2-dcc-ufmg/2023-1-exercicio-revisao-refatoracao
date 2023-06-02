#include "Filme.hpp"


Filme::Filme(std::string nome, std::string genero, int ano, int filme_duracao) :
            Video(nome, genero, ano),  _filme_duracao(filme_duracao) {}

Filme::~Filme(){}

float Filme::get_media_avaliacao() {
    float v = 0;
    for (unsigned int n : _avaliacoes)
        v += (float) n;

    return v/(float) _avaliacoes.size();
}


void Filme::avaliar(unsigned int nota) {
    _avaliacoes.push_back(nota);
}


void Filme::print_info(unsigned int id){
    std::cout << "Filme " << id << ":"
            << _nome
            << " (" << _ano << "), "
            << _genero
            << ", " << _filme_duracao << " min, "
            << "nota: " << this->get_media_avaliacao() << std::endl;
}