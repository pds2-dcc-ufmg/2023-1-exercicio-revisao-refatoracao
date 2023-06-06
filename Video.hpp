#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

class Video
{
    private:
        int _ano;
        std::string _nome, _genero, _subtipo;
        std::list<int> _avaliacoes;
    
    public:
        Video(int ano, std::string nome, std::string genero, std::string subtipo);

        virtual float get_media_avaliacao();
        virtual void avaliar(int nota);
        virtual void print_info(int id);
};

class Filme : public Video
{
    private:
        int _duracao;
    
    public:
        Filme(int ano, std::string nome, std::string genero, int duracao);

        void print_info(int id) override;
};

class Serie: public Video
{
    private:
        int _n_temp, _total_ep;
    
    public:
        Serie(int ano, std::string nome, std::string genero, int n_temp, int total_ep);

        void print_info(int id) override;
};

#endif 