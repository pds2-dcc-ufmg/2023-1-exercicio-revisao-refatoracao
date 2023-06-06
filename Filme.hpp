#ifndef FILME_HPP
#define FILME_HPP

#include "Video.hpp"


class Filme : public Video{
    private:
    
        int _duracao;

    public:

        Filme(std::string nome, std::string genero, int ano, int duracao);

        virtual float get_media_avaliacao() override;

        virtual void avaliar(int nota) override;

        virtual void print_info(int id) override;

};

#endif
