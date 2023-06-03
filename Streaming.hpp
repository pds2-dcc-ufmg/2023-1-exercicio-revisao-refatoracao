#ifndef STREAMING_HPP
#define STREAMING_HPP

#include <string>
#include <vector>

#include "Filme.hpp"
#include "Serie.hpp"

using namespace std;

class Streaming {
private:
	vector<Video*> _catalogo;

public:
	Streaming();
	void cadastrar_filme(Filme* f);
	void cadastrar_serie(Serie* s);
	void avaliacao(int id, int nota);
	void print_catalogo();
};
#endif
