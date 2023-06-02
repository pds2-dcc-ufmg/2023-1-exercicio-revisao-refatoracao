#include "Streaming.hpp"

void Streaming::cadastrar_video(Video *video)
{
    this->catalogo.push_back(video);
}

void Streaming::avaliacao(int id, int nota) 
{
    this->catalogo[id - 1]->avaliar(nota);
}

void Streaming::print_catalogo()
{
    if (this->catalogo.size()==0)
    {
        std::cout << "Sem video cadastrado!" << std::endl;
    }
    else 
    {
        std::cout << "Catalogo Streaming:" << std::endl;

        int indice = 0;
        for (std::vector<Video*>::iterator it = catalogo.begin(); it != catalogo.end(); it++) 
        {
            (*it)->print_info(indice + 1);
            indice++;
        }
    }
}