#include "Streaming.hpp"

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
            cin >> genero >> ano >> duracao;
            getline(cin, nome);

            Filme *filme = new Filme(nome, ano, genero, duracao);

            if (duracao_min <= duracao)
            {
               streaming.cadastrar_video(filme);
            }
        }
        else if (tipo == "Serie") 
        {
            cin >> genero >> ano >> numero_temporada >> numero_episodio;
            getline(cin, nome);

            Serie *serie = new Serie(nome, ano, genero, numero_temporada, numero_episodio);

            if (numero_min_ep <= numero_episodio) 
            {
                streaming.cadastrar_video(serie);
            }
        }
        else if (tipo == "Nota") 
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
