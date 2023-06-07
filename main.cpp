#include "Streaming.hpp"
#include "Video.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

int main() {
    Streaming ss;
    string subtipo;

    while (cin >> subtipo) {
        if (subtipo == "Filme") {
            string nome, genero;
            int ano, duracao;

            cin >> genero >> ano >> duracao;
            getline(cin, nome);

            Video *v;
            v = new Video(nome, ano, genero, subtipo, duracao, 0, 0);

            if (50 <= duracao) {
                ss.cadastrar_filme(v);
            }
        }
        if (subtipo == "Serie") 
        {
            string nome;
            string genero;
            int ano, n_temp, total_ep;

            cin >> genero >> ano >> n_temp >> total_ep;
            getline(cin, nome);
            Video *v;
            v = new Video(nome, ano, genero, subtipo, 0, n_temp, total_ep);

            if (2 <= total_ep) 
            {
                ss.cadastrar_serie(v);
            }
        }
        if (subtipo == "Nota") 
        {
            int id, nota;
            cin >> id >> nota;

            if (nota <= 10 && nota >= 0) {
                    ss.avaliacao(id, nota);
            }
        }
    }

    ss.print_catalogo();

    return 0;
}
