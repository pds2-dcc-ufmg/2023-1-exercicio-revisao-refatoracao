#include "Serie.hpp"

Serie::Serie(string Nome, int Ano, int Id, string Genero, int Temporadas, int Episodios) : Video(Nome, Ano, Id, Genero, "Serie"){
    _Temporadas = Temporadas;
    _Episodios = Episodios;
}

void Serie::Imprimir_Informacoes(){
    cout << "Serie " << this->getId() << ":";
    cout << this->getNome();
    cout << " (" << this->getAno() << "), ";
    cout << this->getGenero() << ", ";
    cout << _Temporadas << " temporadas, ";
    cout << _Episodios << " episodios, ";
    cout << "nota: " << this->getAvaliacao() << std::endl;
}