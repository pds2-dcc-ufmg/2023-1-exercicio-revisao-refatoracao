#include <string>
#include <iostream>
#include "Filme.hpp"

using namespace std;

Filme::Filme(string nome, int ano, string genero, int filme_duracao) :
    Video(nome, ano, genero), _filme_duracao(filme_duracao) {
}

void Filme::print_info(int id) {
    cout << "Filme " << id << ": " << _nome << " (" << _ano << "), " << _genero << ", " << _filme_duracao << " min, ";
    cout << "nota: " << get_media_avaliacao() << std::endl;
}
