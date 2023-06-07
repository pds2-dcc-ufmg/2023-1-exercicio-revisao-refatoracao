#include "Video.hpp"

Video::Video(string nome, int ano, string genero, string subtipo, int duracaoFilme, int numTemporadas, int totalEpisodios) 
: nome(nome), ano(ano), genero(genero), subtipo(subtipo), duracaoFilme(duracaoFilme), numTemporadas(numTemporadas), totalEpisodios(totalEpisodios) {}

float Video::calcularMediaAvaliacao() {
    float soma = 0;
    for (auto nota : avaliacoes)
        soma += nota;
    return soma / avaliacoes.size();
}

void Video::adicionarAvaliacao(int nota) {
    avaliacoes.push_back(nota);
}

