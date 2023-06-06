#include "Video.hpp"

Video::Video(int ano, std::string nome, std::string genero, std::string subtipo) :
    _ano(ano), _nome(nome), _genero(genero), _subtipo(subtipo) {}

float Video::get_media_avaliacao() {
    float soma = 0;

    for(auto nota: _avaliacoes)
        soma += nota;
    
    return soma / _avaliacoes.size();
}

void Video::avaliar(int nota) {
    _avaliacoes.push_back(nota);
}

void Video::print_info(int id) {
    std::cout << _subtipo << ' ' << id << ':';
    std::cout << _nome;
    std::cout << " (" << _ano << "), ";
    std::cout << _genero << ", ";
}

Filme::Filme(int ano, std::string nome, std::string genero, int duracao) :
    Video(ano, nome, genero, "Filme"), _duracao(duracao) {}

void Filme::print_info(int id) {
    Video::print_info(id);

    std::cout << _duracao << " min, ";
    std::cout << "nota: " << Video::get_media_avaliacao() << std::endl;
}

Serie::Serie(int ano, std::string nome, std::string genero, int n_temp, int total_ep) :
    Video(ano, nome, genero, "Serie"), _n_temp(n_temp), _total_ep(total_ep) {}

void Serie::print_info(int id) {
    Video::print_info(id);

    std::cout << _n_temp << " temporadas, ";
    std::cout << _total_ep << " episodios, ";
    std::cout << "nota: " << Video::get_media_avaliacao() << std::endl;
}