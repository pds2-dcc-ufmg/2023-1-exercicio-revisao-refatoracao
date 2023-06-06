#include "Streaming.hpp"

using namespace std;

int main() {

    Streaming streaming;
    string data;

    while (cin >> data) {

        if (data == "Filme") {

            string nome, genero;
            int ano, duracao;

            cin >> genero >> ano >> duracao;
            getline(cin, nome);

            if (50 <= duracao){
                streaming.cadastrar(new Filme(nome, genero, ano, duracao));
            }
            
        }

        if (data == "Serie") {

            string nome;
            string genero;
            int ano, temporadas, duracao_episodio;

            cin >> genero >> ano >> temporadas >> duracao_episodio;
            getline(cin, nome);

        
            if (2 <= duracao_episodio) {
                streaming.cadastrar(new Serie(nome, genero, ano, temporadas, duracao_episodio));
            }

        }

        if (data == "Nota") {

            int id, nota;

            cin >> id >> nota;

            if (nota <= 10 && nota >= 0) {
                streaming.avaliacao(id, nota);
            }

        }

    }

    streaming.print_catalogo();

    return 0;
}
