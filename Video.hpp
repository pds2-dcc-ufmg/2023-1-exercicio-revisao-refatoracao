#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <list>

class Video {
private:
    int ano;
    int filme_duracao;
    int n_temp;
    int total_ep;
    std::string nome;
    std::string genero;
    std::string subtipo;
    std::list<int> avaliacoes;

public:
    Video(std::string nome, int ano, std::string genero);

    float get_media_avaliacao();
    void avaliar(unsigned int nota);
    virtual void print_info(int id);

    // Método para retornar o valor do membro nome
    std::string get_nome() {
        return nome;
    }

      int get_ano() {
        return ano;
    }

      std::string get_genero() {
        return genero;
    }
};

#endif
