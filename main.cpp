#include "Streaming.hpp"

int main()
{
    std::string subtipo;
    Streaming ss;

    while(std::cin >> subtipo) {
        std::string nome, genero;
        int ano, duracao, id, nota, n_temp, total_ep;

        if(subtipo == "Filme") {
            try {
                std::cin >> genero >> ano >> duracao;
                getline(std::cin, nome);

                // Remove o \n no final da string lido no getline
                nome.pop_back();

                Filme *f = new Filme(ano, nome, genero, duracao);

                ss.cadastrar_video(f);
            }
            catch(std::out_of_range& e) {
                std::cout << e.what() << std::endl;
           }
        }
        else if(subtipo == "Serie") {
            try {
                std::cin >> genero >> ano >> n_temp >> total_ep;
                getline(std::cin, nome);

                // Remove o \n no final da string lido no getline
                nome.pop_back();

                Serie *s = new Serie(ano, nome, genero, n_temp, total_ep);
                ss.cadastrar_video(s);
            }
            catch(std::out_of_range& e) {
                std::cout << e.what() << std::endl;
            }
        }
        else if(subtipo == "Nota") {
            try {
                std::cin >> id >> nota;

                ss.avaliacao(id, nota);
            }
            catch(std::out_of_range& e) {
                std::cout << e.what() << std::endl;
            }
        }
        else {
            std::cout << "Comando inválido!" << std::endl;
        }
    }
    ss.print_catalogo();
    return 0;
}