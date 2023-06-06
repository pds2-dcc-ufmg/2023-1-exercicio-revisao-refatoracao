#include "Video.hpp"
#include <iostream>

Video::Video(const std::string &nome, int ano, const std::string &genero, const std::string &subtipo, int filme_duracao, int n_temp, int total_ep)
    : _nome(nome), _ano(ano), _genero(genero), _subtipo(subtipo), _filme_duracao(filme_duracao), _n_temp(n_temp), _total_ep(total_ep)
{
}

float Video::get_media_avaliacao() const
{
    float somatorio_avaliacoes = 0;
    for (auto nota : _avaliacoes)
        somatorio_avaliacoes += nota;
    return somatorio_avaliacoes / _avaliacoes.size();
}

void Video::avaliar(int nota)
{
    if (nota >= 0 && nota <= 10)
    {
        _avaliacoes.push_back(nota);
    }
    else
    {
        std::cout << "Nota inválida!" << std::endl;
    }
}

void Video::print_info(int id) const
{
    if (_subtipo == "Filme")
    {
        std::cout << "Filme " << id << ": ";
        std::cout << _nome;
        std::cout << " (" << _ano << "), ";
        std::cout << _genero;
        std::cout << ", " << _filme_duracao << " min, ";
        std::cout << "nota: " << get_media_avaliacao() << std::endl;
    }

    if (_subtipo == "Serie")
    {
        std::cout << "Série " << id << ": ";
        std::cout << _nome;
        std::cout << " (" << _ano << "), ";
        std::cout << _genero << ", ";
        std::cout << _n_temp << " temporadas, ";
        std::cout << _total_ep << " episodios, ";
        std::cout << "nota: " << get_media_avaliacao() << std::endl;
    }
}