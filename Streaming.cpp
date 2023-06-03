#include <string>
#include <vector>

#include "Filme.hpp"
#include "Serie.hpp"
#include "Streaming.hpp"

using namespace std;

Streaming::Streaming() {}

void Streaming::cadastrar_filme(Filme* f) {
    _catalogo.push_back(f);
}

void Streaming::cadastrar_serie(Serie* s) {
    _catalogo.push_back(s);
}

void Streaming::avaliacao(int id, int nota) {
    _catalogo[id - 1]->avaliar(nota);
}

void Streaming::print_catalogo() {
    if (_catalogo.size() == 0)
        cout << "Sem video cadastrado!" << endl;
    else {
        cout << "Catalogo Streaming:" << endl;
        int i = 0;;
        for (vector<Video*>::iterator it = _catalogo.begin(); it != _catalogo.end(); it++) {
            (*it)->print_info(i + 1);
            i++;
        }
    }
}
