#include <iostream>
#include "Streaming.hpp"

void Streaming::cadastrar_filme(Video* v){
    catalogo.push_back(v);
}

void Streaming::cadastrar_serie(Video* v){
    catalogo.push_back(v);
}

void Streaming::avaliacao(int id, int nota){
    if (id > 0 && id <= catalogo.size()){
        catalogo[id - 1]->avaliar(nota);
    } else {
        std::cout << "ID de vídeo inválido!" << std::endl;
    }
}

void Streaming::print_catalogo(){
    if (catalogo.empty()){
        std::cout << "Sem vídeo cadastrado!" << std::endl;
    } else {
        std::cout << "Catálogo Streaming:" << std::endl;
        int i = 0;
        for (const auto& video : catalogo) {
            video->print_info(i + 1);
            i++;
        }
    }
}