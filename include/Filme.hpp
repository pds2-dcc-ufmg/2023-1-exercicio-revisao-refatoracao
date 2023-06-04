#ifndef FILME_H
#define FILME_H

#include "Video.hpp"

class Filme : public Video{
    private:
        int _Duracao;

    public:
        Filme(string Nome, int Ano, int Id, string Genero, int Duracao);
        
        void Imprimir_Informacoes();
};

#endif