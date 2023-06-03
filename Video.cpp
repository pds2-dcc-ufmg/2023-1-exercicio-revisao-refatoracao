#include <string>
#include <iostream>
#include <list>
#include "Video.hpp"

using namespace std;

Video::Video(string nome, int ano, string genero, string subtipo, int filme_duracao, int n_temp, int total_ep) :
    _nome(nome), _ano(ano), _genero(genero), _subtipo(subtipo), _filme_duracao(filme_duracao), _n_temp(n_temp), _total_ep(total_ep) {
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

void Video::print_info(int id) {
    if (_subtipo == "Filme")
    {
        cout << "Filme " << id << ": " << _nome << " (" << _ano << "), " << _genero << ", " << _filme_duracao << " min, ";
        cout << "nota: " << get_media_avaliacao() << std::endl;
    }

    else if (_subtipo == "Serie")
    {
        cout << "Serie " << id << ": " << _nome << " (" << _ano << "), " << _genero << ", ";
        cout << _n_temp << " temporadas, " << _total_ep << " episodios, ";
        cout << "nota: " << get_media_avaliacao() << std::endl;
    }
}
