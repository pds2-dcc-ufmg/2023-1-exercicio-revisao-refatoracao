#include <string>
#include <iostream>
#include <list>
#include "Video.hpp"

using namespace std;

Video::Video(string nome, int ano, string genero) :
    _nome(nome), _ano(ano), _genero(genero) {
}

float Video::get_media_avaliacao() {
    float soma = 0;
    for (float avaliacao : avaliacoes) {
        soma += avaliacao;
    }
    float media = soma / avaliacoes.size();
    return media;
}

void Video::avaliar(int nota) {
    avaliacoes.push_back(nota);
}
