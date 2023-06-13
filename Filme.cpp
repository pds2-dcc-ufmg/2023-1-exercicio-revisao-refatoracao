#include "Filme.hpp"

//Construtor
Filme::Filme(std::string nome, int ano, std::string genero, int duracao)
    : Video(nome, ano, genero), _duracao(duracao)
{}

//Destrutor
Filme::~Filme()
{}

// Imprime as informações do filme
void Filme::print_info(int id) {
    std::cout << "Filme " << id << ": " << _nome << " (" << _ano << "), " << _genero << ", ";
    std::cout << _duracao << " min, ";
    std::cout << "nota: " << get_media_avaliacao() << std::endl;
}