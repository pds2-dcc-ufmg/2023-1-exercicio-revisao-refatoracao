#include "Video.hpp"

float Video::get_media_avaliacao() 
{
    float v = 0;
    for (auto n : this->avaliacoes)v += n;
    return v/this->avaliacoes.size();
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
        << genero
        << ", " << filme_duracao << " min, "
        << "nota: " << get_media_avaliacao() 
        << std::endl;
    }
    else if (subtipo == "Serie")
    {
        std::cout << "Serie " << id << ":"
        << nome
        << " (" << ano << "), "
        << genero << ", "
        << n_temp << " temporadas, "
        << total_ep << " episodios, "
        << "nota: " << get_media_avaliacao()
        << std::endl;
    }
}