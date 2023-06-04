#include "Video.hpp"

Video::Video(string Nome, int Ano, int Id, string Genero, string Subtipo){
    _Nome = Nome;
    _Ano = Ano;
    _Id = Id;
    _Genero = Genero;
    _Subtipo = Subtipo;
}

void Video::Avaliar(int Nota){
    _Avaliacoes.push_back(Nota);
}

//Retorna a média de todas as avaliações já feitas
float Video::getAvaliacao(){
    float aux = 0;

    for(auto n : _Avaliacoes)
        aux += n;

    return aux/_Avaliacoes.size();
}

int Video::getId(){return _Id;}
int Video::getAno(){return _Ano;}
string Video::getGenero(){return _Genero;}
string Video::getNome(){return _Nome;}
string Video::getSubtipo(){return _Subtipo;}