#ifndef STREAMING_HPP
#define STREAMING_HPP

#include "Video.hpp"
#include <string>
#include <vector>

class Streaming { 
private:
std::vector<Video*> catalogo;

public:
void cadastrar_filme(Video *filme);

void cadastrar_serie(Video *serie);

void avaliacao(int id, int nota);

void print_catalogo();
};

#endif