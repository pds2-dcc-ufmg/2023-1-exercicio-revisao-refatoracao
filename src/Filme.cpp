#include "Filme.hpp"

Filme::Filme(string Nome, int Ano, int Id, string Genero, int Duracao) : Video(Nome, Ano, Id, Genero, "Filme"){
    _Duracao = Duracao;
}

void Filme::Imprimir_Informacoes(){
    cout << "Filme " << this->getId() << ":";
    cout << this->getNome();
    cout << " (" << this->getAno() << "), ";
    cout << this->getGenero();
    cout << ", " << _Duracao << " min, ";
    cout << "nota: " << this->getAvaliacao() << std::endl;
}