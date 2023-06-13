#ifndef FILME_HPP
#define FILME_HPP

#include "Video.hpp"

class Filme : public Video {
    private:
        int _duracao; 
    
    public:
        // Construtor
        Filme(std::string nome, int ano, std::string genero, int duracao);

        // Destrutor
        ~Filme();

        // Imprime as informações do filme
        void print_info(int id) override;
};

#endif