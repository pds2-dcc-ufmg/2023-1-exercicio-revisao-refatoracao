#include "Streaming.hpp"

int main()
{
    Streaming streaming;
    std::string tipo;

    while(std::cin >> tipo) {
        std::string nome, genero;
        int ano;

        if(tipo == "Filme") {
            int duracao;

            std::cin >> genero >> ano >> duracao;
            getline(std::cin, nome);

            Filme *filme = new Filme(ano, nome, genero, duracao);

            if(duracao >= 50)
                streaming.cadastrar_video(filme);
        }
        else if(tipo == "Serie") {
            int n_temp, total_ep;

            std::cin >> genero >> ano >> n_temp >> total_ep;
            getline(std::cin, nome);

            Serie *serie = new Serie(ano, nome, genero, n_temp, total_ep);

            if(total_ep >= 2)
                streaming.cadastrar_video(serie);
        }
        else if(tipo == "Nota") {
            int id, nota;

            std::cin >> id >> nota;

            if(nota <= 10 && nota >= 0) {
                streaming.avaliacao(id, nota);
            }
        }
    }
    streaming.print_catalogo();

    return 0;
}