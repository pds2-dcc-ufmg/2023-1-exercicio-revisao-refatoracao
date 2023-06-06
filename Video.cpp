#include "Video.hpp"
#include <numeric>
#include <iostream>
#include <stdexcept>

Video::Video(std::string nome, int ano, std::string genero, std::string subtipo, int filme_duracao, int n_temp, int total_ep)
    : nome(nome), ano(ano), genero(genero), subtipo(subtipo), filme_duracao(filme_duracao), n_temp(n_temp), total_ep(total_ep) {}

float Video::get_media_avaliacao() const {
    double somaAvaliacoes = 0.0;
    if (!avaliacoes.empty()) {
        somaAvaliacoes = std::accumulate(avaliacoes.begin(), avaliacoes.end(), 0.0);
        return somaAvaliacoes / avaliacoes.size();
    }
    return 0.0;
}

void Video::avaliar(int nota) {
    if (nota < 0 || nota > 10) {
        throw std::invalid_argument("Nota inválida");
    }
    avaliacoes.push_back(nota);
}

void Video::print_info(int id) const {
    if (subtipo == "Filme") {
        std::cout << "Filme " << id << ":";
        std::cout << get_nome();
        std::cout << " (" << get_ano() << "), ";
        std::cout << get_genero();
        std::cout << ", " << get_filme_duracao() << " min, ";
        std::cout << "nota: " << get_media_avaliacao() << std::endl;
    }

    if (subtipo == "Serie") {
        std::cout << "Serie " << id << ":";
        std::cout << get_nome();
        std::cout << " (" << get_ano() << "), ";
        std::cout << get_genero() << ", ";
        std::cout << get_n_temp() << " temporadas, ";
        std::cout << get_total_ep() << " episodios, ";
        std::cout << "nota: " << get_media_avaliacao() << std::endl;
    }
}

std::string Video::get_nome() const {
    return nome;
}

int Video::get_ano() const {
    return ano;
}

std::string Video::get_genero() const {
    return genero;
}

std::string Video::get_subtipo() const {
    return subtipo;
}

int Video::get_filme_duracao() const {
    return filme_duracao;
}

int Video::get_n_temp() const {
    return n_temp;
}

int Video::get_total_ep() const {
    return total_ep;
}
