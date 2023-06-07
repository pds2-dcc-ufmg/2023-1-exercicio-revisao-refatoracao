#include "Streaming.hpp"
#include "Filme.hpp"
#include "Serie.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

int main() {
    Streaming streaming;
    string tipo;

    while (cin >> tipo) {
        if (tipo == "Filme") {
            string nome, genero;
            int ano, duracao;
            cin >> genero >> ano >> duracao;
            getline(cin, nome);

            Filme *filme = new Filme(nome, ano, genero, duracao);
            if (duracao >= 50)
                streaming.adicionarFilme(filme);
        }

        if (tipo == "Serie") {
            string nome, genero;
            int ano, numTemporadas, totalEpisodios;
            cin >> genero >> ano >> numTemporadas >> totalEpisodios;
            getline(cin, nome);

            Serie *serie = new Serie(nome, ano, genero, numTemporadas, totalEpisodios);
            if (totalEpisodios >= 2)
                streaming.adicionarSerie(serie);
        }

        if (tipo == "Nota") {
            int id, nota;
            cin >> id >> nota;
            if (nota >= 0 && nota <= 10) {
                streaming.adicionarAvaliacao(id, nota);
            }
        }
    }

    streaming.imprimirCatalogo();

    return 0;
}

