#include "Video.hpp"
#include <vector>


class Streaming { 
	private:
		std::vector<Video*> _catalogo = {};
		
	public:
		void cadastrarFilme(Video *video);
		void cadastrarSerie(Video *video);
		void avaliacao(int id, int nota);
		void printCatalogo();
};
