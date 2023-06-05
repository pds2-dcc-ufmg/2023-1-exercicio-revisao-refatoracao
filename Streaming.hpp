#ifndef STREAMING_HPP
#define STREAMING_HPP

#include "Video.hpp"
#include "Filme.hpp"
#include "Serie.hpp"
#include <string>
#include <vector>

class Streaming { 
private:
std::vector<Video*> catalogo;

public:
void cadastrar_filme(Filme *filme);

void cadastrar_serie(Serie *serie);

void avaliacao(int id, int nota);

void print_catalogo();

void limpar_catalogo();
};

#endif