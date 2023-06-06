#include "Streaming.hpp"

void Streaming::cadastrar_video(Video* v) {
    catalogo.push_back(v);
}

void Streaming::avaliacao(int id, int nota) {
    if (nota < 0 || nota > 10) {
        throw std::invalid_argument("A avaliação deve estar no intervalo de 0 a 10.");
    }

    if (id >= 1 && id <= catalogo.size()) {
        catalogo[id - 1]->avaliar(nota);
    } else {
        std::cout << "ID inválido!" << std::endl;
    }
}

void Streaming::print_catalogo()
{
    if (catalogo.empty()) {
        cout << "Sem video cadastrado!" << endl;
    } else {
        cout << "Catalogo Streaming:" << endl;
        for (int i = 0; i < catalogo.size(); ++i) {
            catalogo[i]->print_info(i + 1);
        }
    }
}
