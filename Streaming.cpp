#include "Streaming.hpp"

void Streaming::cadastrar_video(Video* v)
    {
        assert(v != nullptr && "Video inválido.");
        catalogo.push_back(v);
    }

void Streaming::avaliar_video(int id, int nota)
    {
        assert(id >= 1 && id <= catalogo.size() && "ID do vídeo inválido.");
        assert(nota >= 0 && nota <= 10 && "Nota inválida.");

        catalogo[id - 1]->avaliar(nota);
    }

void Streaming::imprimir_catalogo() const
    {
        if (catalogo.empty())
        {
            std::cout << "Sem vídeos cadastrados!" << std::endl;
        }
        else
        {
            std::cout << "Catálogo de Streaming:" << std::endl;
            for (size_t i = 0; i < catalogo.size(); i++)
            {
                catalogo[i]->imprimir_info(i + 1);
            }
        }
    }