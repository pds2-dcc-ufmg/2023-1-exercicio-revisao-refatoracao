#include "Filme.hpp"

Filme::Filme(string nome, int ano, string genero, int duracao)
    : Video(nome, ano, genero), duracao(duracao)
{
    if (duracao < 50) {
        throw std::invalid_argument("A duração de um filme deve ser de pelo menos 50 minutos.");
    }
}

void Filme::print_info(int id)
{
    cout << "Filme " << id << ": " << nome << " (" << ano << "), " << genero << ", " << duracao << " min, nota: " << get_media_avaliacao() << std::endl;
}