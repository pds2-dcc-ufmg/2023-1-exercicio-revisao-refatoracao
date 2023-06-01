#include "Streaming.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main()
{
    Streaming streaming;
    string tipo, nome, genero;
    int ano, duracao, numero_temporada, numero_episodio, id, nota;
    const int numero_min_ep = 2;
    const int duracao_min = 50;
    const int nota_min = 0;
    const int nota_max = 10;

    while (cin >> tipo) 
    {
        if (tipo == "Filme")
        {
            numero_temporada = 0;
            numero_episodio = 0;

            cin >> genero >> ano >> duracao;
            getline(cin, nome);

            Video *filme;
            filme = new Video(nome, ano, genero, tipo, duracao, numero_temporada, numero_episodio);

            if (duracao_min <= duracao)
            {
               streaming.cadastrar_filme(filme);
            }
        }
        if (tipo == "Serie") 
        {
            duracao = 0;

            cin >> genero >> ano >> numero_temporada >> numero_episodio;
            getline(cin, nome);

            Video *serie;
            serie = new Video(nome, ano, genero, tipo, duracao, numero_temporada, numero_episodio);

            if (numero_min_ep <= numero_episodio) 
            {
                streaming.cadastrar_serie(serie);
            }
        }
        if (tipo == "Nota") 
        {
            cin >> id >> nota;

            if ((nota <= nota_max) && (nota >= nota_min)) 
            {
                streaming.avaliacao(id, nota);
            }
        }
    }

    streaming.print_catalogo();
    return 0;
}
