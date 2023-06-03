#ifndef STREAMING_HPP
#define STREAMING_HPP

#include <string>
#include <vector>

#include "Video.hpp"

using namespace std;

class Streaming {
private:
	vector<Video*> _catalogo;

public:
	Streaming();
	void cadastrar_filme(Video* v);
	void cadastrar_serie(Video* v);
	void avaliacao(int id, int nota);
	void print_catalogo();
};
#endif
