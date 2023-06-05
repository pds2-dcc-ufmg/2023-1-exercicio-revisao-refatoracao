#include "Video.hpp"

//Construtor
Video::Video(std::string nome, int ano, std::string genero)
    : _nome(nome), _ano(ano), _genero(genero)
{}

//Destrutor
Video::~Video()
{}

float Video::get_media_avaliacao()
{
    float soma = 0;
    for (std::list<int>::iterator it = avaliacoes.begin(); it != avaliacoes.end(); ++it)
    {
        int valor_avaliacao = *it;
        soma += valor_avaliacao;
    }
    return soma / avaliacoes.size();
}

void Video::avaliar(int nota)
{
    avaliacoes.push_back(nota);
}