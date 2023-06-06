#include "Video.hpp"
#include <numeric> //std::accumulate


Video::Video(std::string nome, int anoLancamento, std::string genero){
	_nome = nome;
	_anoLancamento = anoLancamento;
	_genero = genero;
}

float Video::getMediaAvaliacao(){
	const int valorInicial = 0;	
	int quantidadeAvaliacoes = _avaliacoes.size();
	float somaAvaliacoes = std::accumulate(_avaliacoes.begin(), _avaliacoes.end(), valorInicial);
	
	float avaliacaoMedia = somaAvaliacoes / quantidadeAvaliacoes;
	
	return avaliacaoMedia;
}

void Video::avaliar(int nota){
	_avaliacoes.push_back(nota);
}
