#include "Streaming.hpp"

int main(){

Streaming stream;
std :: string palavra;
std::string nome, genero;
int ano, duracao, numtemp, totep, i, na;

while (std::cin >> palavra) {

    if (palavra == "Filme"){
        std::cin >> genero >> ano >> duracao;
        getline(std::cin, nome);    

        Video *v;
        v = new Video(nome, ano, genero, palavra, duracao, 0, 0);
        if (50 <= duracao){
            stream.cadastrar_tudo(v);
        }
    }
    if (palavra == "Serie") {
        std::cin >> genero >> ano >> numtemp >> totep;
        getline(std::cin, nome);
        Video *v;
        v = new Video(nome, ano, genero, palavra, 0, numtemp, totep);
        if (2 <= totep) {
        stream.cadastrar_tudo(v);
        }
    }

    if (palavra == "Nota") {
    std:: cin >> i >> na;

        if ((na <= 10)&&(na >= 0)) {
            stream.avaliacao(i, na);
        }
    }
}
stream.print_catalogo();

return 0;
}
