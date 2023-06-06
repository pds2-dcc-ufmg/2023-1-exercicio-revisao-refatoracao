#include "Filme.hpp"

Filme::Filme(string nome, int ano, string genero, int duracao)
: Video(nome, ano, genero, "Filme", duracao, 0, 0) {}

void Filme::imprimirInfo(int id) {
    cout << "Filme " << id << ": " << nome << " (" << ano << "), "
         << genero << ", " << duracaoFilme << " min, "
         << "nota: " << calcularMediaAvaliacao() << endl;
}
