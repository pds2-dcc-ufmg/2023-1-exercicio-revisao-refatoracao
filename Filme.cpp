#include "Filme.hpp"

Filme::Filme(std::string nome, int ano, std::string genero, int duracao)
    : Video(nome, ano, genero), duracao(duracao) {}

int Filme::get_duracao() {
    return duracao;
}

void Filme::print_info(int id) {
    std::cout << "Filme " << id << ": " << nome << " (" << ano << "), " << genero
              << ", " << duracao << " min, nota: " << get_media_avaliacao() << std::endl;
}
