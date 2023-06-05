#include "Streaming.hpp"
#include "Video.hpp"
#include "Filme.hpp"
#include "Serie.hpp"

int main()
{
    Streaming plataforma;

    std::string nome, genero;
    int ano, duracao, n_temp, total_ep;

    std::string input;
    while (std::cin >> input) {
    
        //adiciona um filme ao catalogo
        if (input == "Filme") {
            std::cin >> genero >> ano >> duracao;
            getline(std::cin, nome);

            Video *video;
            video = new Filme(nome, ano, genero, duracao);
            if (50 <= duracao) {
                plataforma.cadastrar_filme(video);
            }
        }
        
        //adiciona uma serie ao catalogo
        else if (input == "Serie") {
            std::cin >> genero >> ano >> n_temp >> total_ep;
            getline(std::cin, nome);
            Video *video;
            video = new Serie(nome, ano, genero, n_temp, total_ep);
            
            //uma serie precisa ter pelo menos 2 episodios
            if (2 <= total_ep) {
                plataforma.cadastrar_serie(video);
            }
        }

        //adiciona uma nota de usuario
        else if (input == "Nota") {
            int id, nota;
            std::cin >> id >> nota;

            if (nota <= 10) {
                if (nota >= 0) {
                    plataforma.avaliacao(id, nota);
                }
            }
        }
    }
    
    plataforma.print_catalogo();

    return 0;
}
