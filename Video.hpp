#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

class Video {
public:
    int ano, filme_duracao, n_temp, total_ep;
    std::string nome, genero, subtipo;
    std::list<int> avaliacoes;

    Video(std::string nome, int ano, std::string genero, std::string subtipo, int filme_duracao, int n_temp, int total_ep)
        : nome(nome), ano(ano), genero(genero), subtipo(subtipo), filme_duracao(filme_duracao), n_temp(n_temp), total_ep(total_ep) {
    }

    float get_media_avaliacao() const {
        if (!avaliacoes.empty()) {
            float v = 0;
            for (auto nota : avaliacoes) {
                v += nota;
            }
            return v / avaliacoes.size();
        }
        return 0.0f;
    }

    void avaliar(int nota) {
        avaliacoes.push_back(nota);
    }

    void print_info(int id) const {
        if (subtipo == "Filme") {
            std::cout << "Filme " << id << ": ";
            std::cout << nome << " (" << ano << "), ";
            std::cout << genero << ", " << filme_duracao << " min, ";
            std::cout << "nota: " << get_media_avaliacao() << std::endl;
        } else if (subtipo == "Serie") {
            std::cout << "Série " << id << ": ";
            std::cout << nome << " (" << ano << "), ";
            std::cout << genero << ", " << n_temp << " temporadas, ";
            std::cout << total_ep << " episódios, ";
            std::cout << "nota: " << get_media_avaliacao() << std::endl;
        }
    }
};

#endif // VIDEO_HPP
