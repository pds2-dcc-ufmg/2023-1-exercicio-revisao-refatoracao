#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <iostream>
#include <list>
#include <string>

class Video {
private:
    std::string nome;
    int ano;
    std::string genero;
    std::string subtipo;
    int filme_duracao;
    int n_temp;
    int total_ep;
    std::list<int> avaliacoes;

public:
    Video(std::string nome, int ano, std::string genero, std::string subtipo, int filme_duracao, int n_temp, int total_ep)
        : nome(nome), ano(ano), genero(genero), subtipo(subtipo), filme_duracao(filme_duracao), n_temp(n_temp), total_ep(total_ep) {}

    float get_media_avaliacao() {
        if (avaliacoes.empty()) {
            return 0.0f;
        }

        float soma_avaliacoes = 0;
        for (const auto& nota : avaliacoes) {
            soma_avaliacoes += nota;
        }
        return soma_avaliacoes / avaliacoes.size();
    }

    void avaliar(int nota) {
        if (nota >= 0 && nota <= 10) {
            avaliacoes.push_back(nota);
        }
    }

    void print_info(int id) {
        std::cout << subtipo << " " << id << ": ";
        std::cout << nome << " (" << ano << "), ";
        std::cout << genero;

        if (subtipo == "Filme") {
            std::cout << ", " << filme_duracao << " min";
        }
        else if (subtipo == "Serie") {
            std::cout << ", " << n_temp << " temporadas, " << total_ep << " episódios";
        }

        std::cout << ", nota: " << get_media_avaliacao() << std::endl;
    }
};

#endif