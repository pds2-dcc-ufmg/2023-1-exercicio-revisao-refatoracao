#include "Filme.hpp"
#include <iostream>

Filme::Filme(const std::string nome, int ano, const std::string genero, int duracao)
    : Video(nome, ano, genero, "Filme"), duracao(duracao) {
}

void Filme::imprimirInfo(int id) {
    std::cout << "Filme " << id << ": ";
    std::cout << nome << " (" << ano << "), ";
    std::cout << genero << ", " << duracao << " min, ";
    std::cout << "nota: " << getMediaAvaliacao() << std::endl;
}

float Filme::getMediaAvaliacao() {
    if (avaliacoes.empty()) {
        return 0.0f;
    }

    float soma = 0.0f;
    for (int nota : avaliacoes) {
        soma += nota;
    }

    return soma / avaliacoes.size();
}

void Filme::avaliar(int nota) {
    avaliacoes.push_back(nota);
}
