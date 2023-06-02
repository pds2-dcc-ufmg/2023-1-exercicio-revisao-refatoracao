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

void Video::print_info(int id)
{
    if (subtipo == "Filme") 
    {
        std::cout << "Filme " << id << ":"
        << nome
        << " (" << ano << "), "
        << genero << ", " 
        << filme_duracao << " min, "
        << "nota: " << get_media_avaliacao() 
        << std::endl;
    }
    else if (subtipo == "Serie")
    {
        std::cout << "Serie " << id << ":"
        << nome
        << " (" << ano << "), "
        << genero << ", "
        << numero_temporada << " temporadas, "
        << numero_episodio << " episodios, "
        << "nota: " << get_media_avaliacao()
        << std::endl;
    }
}