#include <string>
#include <iostream>
#include "Filme.hpp"
#include "Video.hpp"


Filme::Filme(std::string nome, int ano, std::string genero, int duracao) :
    Video(nome, ano, genero), duracao(duracao) {
}

void Filme::print_info(int id) {
    std::cout << "Filme " << id << ": " << get_nome() << " (" << get_ano() << "), " << get_genero() << ", ";
    std::cout << duracao << " min, ";
    std::cout << "nota: " << get_media_avaliacao() << std::endl;
}
