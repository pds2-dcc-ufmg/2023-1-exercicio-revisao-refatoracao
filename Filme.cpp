#include "Filme.hpp"

Filme::Filme(std::string nome, int anoLancamento, std::string genero, int duracaoFilme) : Video(nome, anoLancamento, genero){
	_duracaoFilme = duracaoFilme;	
}

void Filme::printInfo(int id){
	std::cout << "Filme " << id << ":" << _nome << " (" << _anoLancamento << "), " << _genero << ", ";
	std::cout << _duracaoFilme << " min, " << "nota: " << getMediaAvaliacao() << std::endl;
}
