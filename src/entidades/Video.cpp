#include "Video.hpp"

float Video::get_media_avaliacao() 
{
    float soma_notas = 0;
    for (auto nota : this->avaliacoes)soma_notas += nota;
    return soma_notas/this->avaliacoes.size();
}

void Video::avaliar(int nota) 
{
    this->avaliacoes.push_back(nota);
}