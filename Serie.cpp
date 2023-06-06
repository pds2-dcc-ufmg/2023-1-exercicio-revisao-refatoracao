#include "Serie.hpp"


Serie::Serie(std::string nome, std::string genero, int ano, int numero_ep, int tam_ep):
            Video(nome, genero, ano), _numero_temporadas(numero_ep), _tamanho_episodios(tam_ep) {}


float Serie::get_media_avaliacao(){
    float v = 0.0;
    for (auto n : _avaliacoes){
        v += (float)n;
    }
      return v/(float)_avaliacoes.size();
}


void Serie::avaliar(int nota) {
    _avaliacoes.push_back(nota);
}


void Serie::print_info(int id){
    std::cout << "Serie " << id << ":"
     << _nome
     << " (" << _ano << "), "
     << _genero << ", "
     << _numero_temporadas << " temporadas, "
     << _tamanho_episodios << " episodios, "
     << "nota: " << get_media_avaliacao() << std::endl;
}
