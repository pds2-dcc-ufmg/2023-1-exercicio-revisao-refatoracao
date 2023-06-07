#ifndef SERIE_HPP
#define SERIE_HPP
#include "Video.hpp"

class Serie: public Video
{
    private:
        int numero_temporada, numero_episodio;
    public:
        Serie(std::string nome, int ano, std::string genero, int numero_temporada, int numero_episodio):
            Video (nome, ano, genero), numero_temporada (numero_temporada), numero_episodio (numero_episodio) {};
        ~Serie() = default;
        void print_info(int id) override;
};

#endif