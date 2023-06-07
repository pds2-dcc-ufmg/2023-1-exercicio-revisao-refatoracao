#include "Serie.hpp"
#include <iostream>

Serie::Serie(const std::string nome, int ano, const std::string genero, int numTemporadas, int numEpisodios)
    : Video(nome, ano, genero, "Serie"), numTemporadas(numTemporadas), numEpisodios(numEpisodios) {
}

void Serie::imprimirInfo(int id) {
    std::cout << "Serie " << id << ": ";
    std::cout << nome << " (" << ano << "), ";
    std::cout << genero << ", ";
    std::cout << numTemporadas << " temporadas, ";
    std::cout << numEpisodios << " episodios, ";
    std::cout << "nota: " << getMediaAvaliacao() << std::endl;
}

float Serie::getMediaAvaliacao() {
    if (avaliacoes.empty()) {
        return 0.0f;
    }

    float soma = 0.0f;
    for (int nota : avaliacoes) {
        soma += nota;
    }

    return soma / avaliacoes.size();
}

void Serie::avaliar(int nota) {
    avaliacoes.push_back(nota);
}
