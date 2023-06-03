#include <string>
#include <vector>

#include "Video.hpp"
#include "Streaming.hpp"

using namespace std;

Streaming::Streaming(){}

void Streaming::cadastrar_filme(Video* v) {
    _catalogo.push_back(v);
}

void Streaming::cadastrar_serie(Video* v) {
    _catalogo.push_back(v);
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
