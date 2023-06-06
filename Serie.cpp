#include "Serie.hpp"

Serie::Serie(std::string nome, int anoLancamento, std::string genero, int numeroTemporadas, int totalEpisodios) : Video(nome, anoLancamento, genero){
	_numeroTemporadas = numeroTemporadas;
	_totalEpisodios = totalEpisodios;
}

void Serie::printInfo(int id){
	std::cout << "Serie " << id << ":" << _nome << " (" << _anoLancamento << "), ";
	std::cout << _genero << ", " << _numeroTemporadas << " temporadas, ";
	std::cout << _totalEpisodios << " episodios, " << "nota: " << getMediaAvaliacao() << std::endl;
}
