#ifndef SERIE_H
#define SERIE_H

#include "Video.hpp"

class Serie : public Video{
    private:
        int _Temporadas;
        int _Episodios;

    public:
        Serie(string Nome, int Ano, int Id, string Genero, int Temporadas, int Episodios);
        
        void Imprimir_Informacoes();
};

#endif