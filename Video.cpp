#include "Video.hpp"
#include <iostream>

Video::Video(std::string nome, int ano, std::string genero)
    : nome(nome), ano(ano), genero(genero)
{
}

float Video::get_media_avaliacao()
{
    float soma_avaliacoes = 0;
    for (auto nota : avaliacoes) {
        soma_avaliacoes += nota;
    }
    return soma_avaliacoes / avaliacoes.size();
}

void Video::avaliar(unsigned int nota)
{
    avaliacoes.push_back(nota);
}

void Video::print_info(int id)
{
    std::cout << "Video " << id << ": ";
    std::cout << nome << " (" << ano << "), ";
    std::cout << genero;

    if (subtipo == "Filme") {
        std::cout << ", " << filme_duracao << " min";
    } else if (subtipo == "Serie") {
        std::cout << ", " << n_temp << " temporadas, ";
        std::cout << total_ep << " episodios";
    }

    std::cout << ", nota: " << get_media_avaliacao() << std::endl;
}
