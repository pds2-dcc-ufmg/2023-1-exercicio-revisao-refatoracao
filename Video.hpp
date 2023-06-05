#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

class Video {
    protected:
        int _ano;
        std::string _nome;
        std::string _genero;
        std::list<int> avaliacoes;

    public:
        // Construtor
        Video(std::string nome, int ano, std::string genero);

        // Destrutor
        ~Video();

        // Retorna a média das avaliações do vídeo
        float get_media_avaliacao();
        
        // Registra uma avaliação para o vídeo
        void avaliar(int nota);
        
        // Imprime as informações do vídeo
        virtual void print_info(int id) = 0;
};

#endif