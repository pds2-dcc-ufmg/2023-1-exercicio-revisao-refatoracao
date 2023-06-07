#include "Serie.hpp"

Serie::Serie(std::string nome, std::string genero, int ano, int num_temporadas, int num_episodios) :
    Video(nome, genero, ano), _num_temporadas(num_temporadas), _num_episodios(num_episodios) {}

Serie::~Serie() {}

float Serie::calcular_media_avaliacao() {
    float soma = 0;
    for (unsigned int nota : _avaliacoes)
        soma += static_cast<float>(nota);

    return soma / static_cast<float>(_avaliacoes.size());
}

void Serie::adicionar_avaliacao(unsigned int nota) {
    _avaliacoes.push_back(nota);
}

void Serie::imprimir_informacoes(unsigned int id) {
    std::cout << "Série " << id << ": "
        << _nome << " (" << _ano << "), "
        << _genero << ", " << _num_temporadas << " temporadas, "
        << _num_episodios << " episódios, "
        << "média de avaliação: " << calcular_media_avaliacao() << std::endl;
}
