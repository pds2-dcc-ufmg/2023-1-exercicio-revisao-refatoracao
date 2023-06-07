#include "Filme.hpp"

Filme::Filme(std::string nome, std::string genero, int ano, int duracao) :
    Video(nome, genero, ano), _duracao(duracao) {}

Filme::~Filme() {}

float Filme::calcular_media_avaliacao() {
    float soma = 0;
    for (unsigned int nota : _avaliacoes)
        soma += static_cast<float>(nota);

    return soma / static_cast<float>(_avaliacoes.size());
}

void Filme::adicionar_avaliacao(unsigned int nota) {
    _avaliacoes.push_back(nota);
}

void Filme::imprimir_informacoes(unsigned int id) {
    std::cout << "Filme " << id << ": "
        << _nome << " (" << _ano << "), "
        << _genero << ", " << _duracao << " min, "
        << "média de avaliação: " << calcular_media_avaliacao() << std::endl;
}
