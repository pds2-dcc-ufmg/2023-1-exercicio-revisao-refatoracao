#include "Serie.hpp"

Serie::Serie(string nome, int ano, string genero, int numTemporadas, int totalEpisodios)
: Video(nome, ano, genero, "Serie", 0, numTemporadas, totalEpisodios) {}

void Serie::imprimirInfo(int id) {
    cout << "Serie " << id << ": " << nome << " (" << ano << "), "
         << genero << ", " << numTemporadas << " temporadas, "
         << totalEpisodios << " episódios, "
         << "nota: " << calcularMediaAvaliacao() << endl;
}
