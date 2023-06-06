#include "Video.hpp"
#include <iostream>

Video::Video(std::string nome, int ano, std::string genero, std::string subtipo, int filme_duracao, int n_temp, int total_ep)
    : nome(nome), ano(ano), genero(genero), subtipo(subtipo), filme_duracao(filme_duracao), n_temp(n_temp), total_ep(total_ep)
{
}

float Video::get_media_avaliacao()
{
    if (avaliacoes.empty()) {
        return 0.0f;
    }

    float soma = 0;
    for (auto nota : avaliacoes) {
        soma += nota;
    }

    return soma / avaliacoes.size();
}

void Video::avaliar(int nota)
{
    avaliacoes.push_back(nota);
}

void Video::print_info(int id)
{
    if (subtipo == "Filme")
    {
        std::cout << "Filme " << id << ": ";
        std::cout << nome << " (" << ano << "), ";
        std::cout << genero << ", " << filme_duracao << " min, ";
        std::cout << "nota: " << get_media_avaliacao() << std::endl;
    }
    else if (subtipo == "Serie")
    {
        std::cout << "Série " << id << ": ";
        std::cout << nome << " (" << ano << "), ";
        std::cout << genero << ", " << n_temp << " temporadas, ";
        std::cout << total_ep << " episódios, ";
        std::cout << "nota: " << get_media_avaliacao() << std::endl;
    }
}