#include "Video.hpp"

Video::Video(int ano, std::string nome, std::string genero) {
    _ano = ano;
    _nome = nome;
    _genero = genero;
}

float Video::get_media_avaliacao() {
    int total = 0;
    int n = _avaliacoes.size();

    for(auto nota: _avaliacoes)
        total += nota;
    
    float media = (float) total/n;

    return media;
}

void Video::avaliar(int nota) {
    if(nota < 0 || nota > 10)
        throw(std::out_of_range("Nota inválida!"));

    _avaliacoes.push_back(nota);
}

void Video::print_info(int id) {
    std::cout << get_subtipo() << ' ' << id << ':' << _nome << " (" << _ano << "), " << _genero << ", ";
}

Filme::Filme(int ano, std::string nome, std::string genero, int duracao) : Video(ano, nome, genero){
    if(duracao < 50)
        throw(std::out_of_range("Duração abaixo do permitido!"));
    
    _duracao = duracao;
}

void Filme::print_info(int id) {
    Video::print_info(id);

    std::cout << _duracao << " min, " << "nota: " << Video::get_media_avaliacao() << std::endl;
}

std::string Filme::get_subtipo() {
    return "Filme";
}

Serie::Serie(int ano, std::string nome, std::string genero, int n_temp, int total_ep) :Video(ano, nome, genero) {
    if(total_ep < 2)
        throw(std::out_of_range("Muitos poucos episódios!"));

    _n_temp = n_temp;
    _total_ep = total_ep;
}

void Serie::print_info(int id) {
    Video::print_info(id);

    std::cout << _n_temp << " temporadas, " << _total_ep << " episodios, "
        << "nota: " << Video::get_media_avaliacao() << std::endl;
}
std::string Serie::get_subtipo() {
    return "Serie";
}