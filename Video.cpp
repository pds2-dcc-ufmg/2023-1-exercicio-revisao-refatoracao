#include "Video.hpp"

float Video::calcular_media_avaliacao() const
    {
        if (avaliacoes.empty())
        {
            return 0.0f;
        }

        float soma = 0.0f;
        for (int nota : avaliacoes)
        {
            soma += nota;
        }

        return soma / avaliacoes.size();
    }

void Video::avaliar(int nota)
    {
        assert(nota >= 0 && nota <= 10 && "Nota inválida.");

        avaliacoes.push_back(nota);
    }

void Video::imprimir_info(int id) const
{
    std::cout << subtipo << " " << id << ": ";
    std::cout << nome << " (" << ano << "), ";
    std::cout << genero;

    if (subtipo == "Filme")
    {
        std::cout << ", " << duracao << " min, ";
    }
    else if (subtipo == "Serie")
    {
        std::cout << ", " << num_temporadas << " temporadas, ";
        std::cout << num_episodios << " episódios, ";
    }

    std::cout << "nota: " << calcular_media_avaliacao() << std::endl;
}
