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
        << this->nome
        << " (" << this->ano << "), "
        << this->genero << ", " 
        << this->filme_duracao << " min, "
        << "nota: " << this->get_media_avaliacao() 
        << std::endl;
    }
    else if (subtipo == "Serie")
    {
        std::cout << "Serie " << id << ":"
        << this->nome
        << " (" << ano << "), "
        << this->genero << ", "
        << this->numero_temporada << " temporadas, "
        << this->numero_episodio << " episodios, "
        << "nota: " << this->get_media_avaliacao()
        << std::endl;
    }
}