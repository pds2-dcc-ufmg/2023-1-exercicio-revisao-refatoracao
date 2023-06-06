#include "Streaming.hpp"

void Streaming::cadastrarFilme(Video *video){
	_catalogo.push_back(video);
}

void Streaming::cadastrarSerie(Video *video){
	_catalogo.push_back(video);
}

void Streaming::avaliacao(int id, int nota){
	int localizacaoVetor = id - 1;
	_catalogo[localizacaoVetor]->avaliar(nota);
}

void Streaming::printCatalogo(){
	if(_catalogo.size() == 0) //Vazio
		std::cout << "Sem video cadastrado!" << std::endl;
	else {
		std::cout << "Catalogo Streaming:" << std::endl;
		int id = 0;
	    for(auto it : _catalogo) {
			it->printInfo(id + 1);
			id++;
		}
	}
}
