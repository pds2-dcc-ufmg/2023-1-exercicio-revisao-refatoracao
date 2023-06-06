#ifndef STREAMING_HPP
#define STREAMING_HPP

#include <string>
#include <vector>
#include "Video.hpp"

using namespace std;

class Streaming {
public:
    vector<Video*> catalogo;

    void adicionarFilme(Video *v);
    void adicionarSerie(Video *v);
    void adicionarAvaliacao(int id, int nota);
    void imprimirCatalogo();
};

#endif
