#include "Filme.hpp"


Filme::Filme(std::string nome, std::string genero, int ano, int duracao):
            Video(nome, genero, ano), _duracao(duracao) {}

    
float Filme::get_media_avaliacao(){
    float v = 0.0;
    for (int n : _avaliacoes){
        v += (float)n;
    }   
    return v/(float)_avaliacoes.size();
}


void Filme::avaliar(int nota) {
    _avaliacoes.push_back(nota);
}


void Filme::print_info(int id){
    std::cout << "Filme " << id << ":"
            << _nome
            << " (" << _ano << "), "
            << _genero
            << ", " << _duracao << " min, "
            << "nota: " << get_media_avaliacao() << std::endl;
}
