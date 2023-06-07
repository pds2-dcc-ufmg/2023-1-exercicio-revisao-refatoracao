#include "Video.hpp"

Video::Video(std::string nome, int ano, std::string genero, std::string subtipo, int filme_duracao, int n_temp, int total_ep)
    : nome(nome), ano(ano), genero(genero), subtipo(subtipo), filme_duracao(filme_duracao), n_temp(n_temp), total_ep(total_ep)
{
}

void Video::avaliar(int nota) {
    avaliacoes.push_back(nota);
}

void Video::print_info(int id) {
    if (subtipo == "Filme") {
        std::cout << "Filme " << id << ":";
        std::cout << nome;
        std::cout << " (" << ano << "), ";
        std::cout << genero;
        std::cout << ", " << filme_duracao << " min, ";
        std::cout << "nota: " << get_media_avaliacao() << std::endl;
    }

    if (subtipo == "Serie") {
        std::cout << "Serie " << id << ":";
        std::cout << nome;
        std::cout << " (" << ano << "), ";
        std::cout << genero << ", ";
        std::cout << n_temp << " temporadas, ";
        std::cout << total_ep << " episodios, ";
        std::cout << "nota: " << get_media_avaliacao() << std::endl;
    }
}

float Video::get_media_avaliacao() {
    float soma = 0;
    for (auto nota : avaliacoes) {
        soma += nota;
    }
    return soma / avaliacoes.size();
}
