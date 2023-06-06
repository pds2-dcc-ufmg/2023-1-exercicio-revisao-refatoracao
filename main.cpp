#include "Streaming.hpp"
#include "Video.hpp"
#include "Filme.hpp"
#include "Serie.hpp"

int main(){
	Streaming streaming;
	std::string menu;
	
	std::string nome;
	std::string genero;
	int anoLancamento;
	int duracaoFilme;
	int numeroTemporadas;
	int totalEpisodios;
	int id;
	float nota;
	
	const int duracaoMinimaFilme = 50;
	const int numeroMinimoEpisodios = 2;
	const float notaMaxima = 10.0;
	const float notaMinima = 0.0;
	

	while (std::cin >> menu) {
		if (menu == "Filme"){
			std::cin >> genero >> anoLancamento >> duracaoFilme;
			std::getline(std::cin, nome);
			Filme *filme = new Filme(nome, anoLancamento, genero, duracaoFilme);
			
			if (duracaoFilme >= duracaoMinimaFilme){
				streaming.cadastrarFilme(filme);
			}
		}
		
		if (menu == "Serie"){
			std::cin >> genero >> anoLancamento >> numeroTemporadas >> totalEpisodios;
			std::getline(std::cin, nome);
			Serie *serie = new Serie(nome, anoLancamento, genero, numeroTemporadas, totalEpisodios);
			if (totalEpisodios >= numeroMinimoEpisodios){
				streaming.cadastrarSerie(serie);
			}
		}
		
		if (menu == "Nota") {
			std::cin >> id >> nota;
			
			if ((nota >= 0) && (nota <= 10)) {
				streaming.avaliacao(id, nota);
			}
		}
		
	}
	
	streaming.printCatalogo();
	return 0;
}
