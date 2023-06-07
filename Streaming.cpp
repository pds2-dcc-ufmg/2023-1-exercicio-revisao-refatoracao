#include "Streaming.hpp"

void Streaming::adicionarFilme(Video *v) {
    catalogo.push_back(v);
}

void Streaming::adicionarSerie(Video *v) {
    catalogo.push_back(v);
}

void Streaming::adicionarAvaliacao(int id, int nota) {
    catalogo[id - 1]->adicionarAvaliacao(nota);
}

void Streaming::imprimirCatalogo() {
    if (catalogo.empty())
        cout << "Sem vídeo cadastrado!" << endl;
    else {
        cout << "Catálogo Streaming:" << endl;
        int id = 1;
        for (auto video : catalogo) {
            video->imprimirInfo(id++);
        }
    }
}
