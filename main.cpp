#include "Streaming.hpp"

#include <iostream>
#include <string>

using namespace std;

int main() {
    Streaming streaming;
    string comando;

    while (cin >> comando) {
        if (comando == "Filme") {
            string nomeFilme, generoFilme;
            int anoFilme, duracaoFilme;
            cin >> generoFilme >> anoFilme >> duracaoFilme;
            cin.ignore();
            getline(cin, nomeFilme);

            Filme* f = new Filme(nomeFilme, anoFilme, generoFilme, duracaoFilme);

            if (duracaoFilme >= 50) {
                streaming.cadastrar_video(f);
            }
            else {
                cout << "Filme nao cadastrado. Duracao menor que 50 minutos." << endl;
            }
        }
        else if (comando == "Serie") {
            string nomeSerie, generoSerie;
            int anoSerie, numeroTemporada, numeroEpisodios;
            cin >> generoSerie >> anoSerie >> numeroTemporada >> numeroEpisodios;
            cin.ignore();
            getline(cin, nomeSerie);

            Serie* s = new Serie(nomeSerie, anoSerie, generoSerie, numeroTemporada, numeroEpisodios);

            if (numeroEpisodios >= 2) {
                streaming.cadastrar_video(s);
            }
            else {
                cout << "Serie nao cadastrada. Numero de episodios menor que 2." << endl;
            }
        }
        else if (comando == "Nota") {
            int id, notaAvaliacao;
            cin >> id >> notaAvaliacao;

            if (notaAvaliacao >= 0 && notaAvaliacao <= 10) {
                streaming.avaliacao(id, notaAvaliacao);
            }
        }
        else if(comando == "Listar Catalogo"){
            streaming.print_catalogo();
        }
        else {
            cout << "Comando invalido!" << endl;
        }
    }

    return 0;
}