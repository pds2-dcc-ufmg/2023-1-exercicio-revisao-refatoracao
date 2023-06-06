#include "Streaming.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

const int NUMERO_MIN_DURACAO_FILME = 50;
const int NUMERO_MIN_DE_EPSODIOS= 2;
const int NUM_MAX_DE_NOTA= 10;
const int NUM_MIN_DE_NOTA= 0;

int main(){
    Streaming streaming;
    std::string palavra_input;

    while (std::cin >> palavra_input) {
        if (palavra_input == "Filme"){
            std::string nome, genero;
            int ano, duracao;
            std::cin >> genero >> ano >> duracao;
            std::getline(std::cin, nome);

            Video *video;
            video = new Video(nome, ano, genero, palavra_input, duracao, 0, 0);

            if (NUMERO_MIN_DURACAO_FILME <= duracao){
                streaming.cadastrar_filme(video);
            }
            
        }
        if (palavra_input == "Serie") {
            std::string nome;
            std::string genero;
            int ano, numero_de_temporadas, totais_de_epsodios;
            std::cin >> genero >> ano >> numero_de_temporadas >> totais_de_epsodios;
            std::getline(std::cin, nome);

            Video *video;
            video = new Video(nome, ano, genero, palavra_input, 0, numero_de_temporadas, totais_de_epsodios);
            if (NUMERO_MIN_DE_EPSODIOS <= totais_de_epsodios){
                streaming.cadastrar_serie(video);
            }
        }

        if (palavra_input == "Nota") {
            int id, nota;
            std::cin >> id >> nota;

            if (nota <= NUM_MAX_DE_NOTA) {
                if (nota >= NUM_MIN_DE_NOTA) {
                    streaming.avaliacao(id, nota);
                }
            }
        }
    }
    streaming.print_catalogo();

    return 0;
}
