#ifndef STREAMING_HPP
#define STREAMING_HPP

#include <vector>

#include "Filme.hpp"
#include "Serie.hpp"

class Streaming {
private:
    //Vetor de ponteiros para vídeos no catálogo
    std::vector<Video*> _catalogo;

public:
    // Construtor
    Streaming();
    
    // Cadastra um filme ou serie no catálogo
    void cadastrar_video(Video* video);

    // Registra uma avaliação para um vídeo do catálogo
    void avaliacao(int id, int nota);

    // Imprime o catálogo de vídeos
    void print_catalogo();
};

#endif