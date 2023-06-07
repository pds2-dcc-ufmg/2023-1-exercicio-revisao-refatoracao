#include "Streaming.hpp"

void Streaming::cadastrar_filme(Video *v) {
    catalogo.push_back(v);
}

void Streaming::cadastrar_serie(Video *v) {
    catalogo.push_back(v);
}

void Streaming::avaliacao(int id, int nota) {
    catalogo[id - 1]->avaliar(nota);
}

void Streaming::print_catalogo() {
    if (catalogo.size() == 0)
        cout << "Sem video cadastrado!" << endl;

    else {
        cout << "Catalogo Streaming:" << endl;

        int i = 0;;

        for (vector<Video*>::iterator it = catalogo.begin(); it != catalogo.end(); it++) {
            (*it)->print_info(i + 1);
            i++;
        }
    }
}