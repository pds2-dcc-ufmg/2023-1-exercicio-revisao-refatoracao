#ifndef SERIE_HPP
#define SERIE_HPP

#include "Video.hpp"

class Serie : public Video{
    private:
    
        int _numero_temporadas, _tamanho_episodios;

    public:

        Serie(std::string nome, std::string genero, int ano, int numero_ep, int tam_ep);

        virtual float get_media_avaliacao() override;

        virtual void avaliar(int nota) override;

        virtual void print_info(int id) override;

};

#endif
