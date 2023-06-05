#ifndef SERIE_HPP
#define SERIE_HPP

#include "Video.hpp"

class Serie : public Video {
    private:
        int _n_temp; 
        int _total_ep;
    
    public:
        // Construtor
        Serie(std::string nome, int ano, std::string genero, int n_temp, int total_ep);

        // Destrutor
        ~Serie();

        // Imprime as informações da série
        void print_info(int id) override;
};

#endif