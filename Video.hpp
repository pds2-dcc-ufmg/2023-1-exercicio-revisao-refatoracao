#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <iostream>
#include <string>
#include <list>
#include <exception>

class Video
{
    private:
        std::list<int> _avaliacoes;
        std::string _nome, _genero;
        int _ano;
    
    public:
        Video(int ano, std::string nome, std::string genero);

        virtual float get_media_avaliacao();
        virtual void avaliar(int nota);
        virtual void print_info(int id);
        virtual std::string get_subtipo() = 0;
};

class Filme : public Video
{
    private:
        int _duracao;
    
    public:
        Filme(int ano, std::string nome, std::string genero, int duracao);

        void print_info(int id) override;
        std::string get_subtipo() override;
};

class Serie: public Video
{
    private:
        int _n_temp, _total_ep;
    
    public:
        Serie(int ano, std::string nome, std::string genero, int n_temp, int total_ep);

        void print_info(int id) override;
        std::string get_subtipo() override;
};

#endif 