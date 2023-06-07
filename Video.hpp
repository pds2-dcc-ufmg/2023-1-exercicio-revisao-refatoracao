#include "Video.hpp"

Video::Video(std::string nome, int ano, std::string genero, std::string subtipo, int filmeDuracao, int numeroTemporadas, int totalEpisodios)
    : nome(nome), ano(ano), genero(genero), subtipo(subtipo), filmeDuracao(filmeDuracao), numeroTemporadas(numeroTemporadas), totalEpisodios(totalEpisodios) {}

float Video::get_media_avaliacao() {
    float valorTotal = 0;
    for (auto nota : avaliacoes) {
        valorTotal += nota;
    }
    return valorTotal / avaliacoes.size();
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
        std::cout << ", " << filmeDuracao << " min, ";
        std::cout << "nota: " << get_media_avaliacao() << std::endl;
    }

    if (subtipo == "Serie") {
        std::cout << "Serie " << id << ":";
        std::cout << nome;
        std::cout << " (" << ano << "), ";
        std::cout << genero << ", ";
        std::cout << numeroTemporadas << " temporadas, ";
        std::cout << totalEpisodios << " episodios, ";
        std::cout << "nota: " << get_media_avaliacao() << std::endl;
    }
}
