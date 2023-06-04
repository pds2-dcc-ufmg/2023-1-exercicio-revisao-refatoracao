#include "Streaming.hpp"

int main(){
    Streaming Streaming;
    string input;

    string nome, genero;
    int ano, duracao, episodios, temporadas, nota;
    int id = 1; //Id utilizado na criação das séries e filmes. É incrementado automaticamente após cada criação
    int id_aux;

    while(cin >> input){
        if(input == "Filme"){
            cin >> genero >> ano >> duracao;
            getline(cin, nome);
            
            Filme* Filme_aux = new Filme(nome, ano, id, genero, duracao);
            if(duracao >= 50){
                Streaming.Cadastrar_Filme(Filme_aux);
            }

            id++;
        }

        else if(input == "Serie"){
            cin >> genero >> ano >> temporadas >> episodios;
            getline(cin, nome);

            Serie* Serie_aux = new Serie(nome, ano, id, genero, temporadas, episodios);
            if(episodios >= 2){
                Streaming.Cadastrar_Serie(Serie_aux);
            }

            id++;
        }

        else if (input == "Nota"){
            cin >> id_aux >> nota;

            if(nota <= 10 && nota  >= 0){
                Streaming.Avaliar(id_aux, nota);
            }
        }
    }

    Streaming.Printar_Catalogo();

    return 0;
}
