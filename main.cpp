#include "Streaming.hpp"
#include <iostream>
#include <string>

int main()
{
    Streaming streaming; 

    std::string tipo;

    while (std::cin >> tipo)
    {
        if (tipo == "Filme") /
        {
            std::string nome, genero; // Variáveis corrigidas para nomes descritivos.
            int ano, duracao; 
            std::cin >> genero >> ano >> duracao; 
            std::cin.ignore(); //utilizei no lugar do getline.

            // Criação de um objeto Video com os dados do Filme
            Video video(nome, ano, genero, tipo, duracao, 0, 0);

            if (duracao >= 50) //forma mais eficiente de verificar a duração do filme.
            {
                streaming.cadastrar_filme(video); 
            }
        }
        else if (tipo == "Serie") 
        {
            std::string nome, genero; 
            int ano, num_temporadas, duracao_episodio; 
            std::cin >> genero >> ano >> num_temporadas >> duracao_episodio; 
            std::cin.ignore(); 

            // Tirei a utilização de ponteiros, que era desnecessária, para alocar o objeto "vídeo"
            Video video(nome, ano, genero, tipo, 0, num_temporadas, duracao_episodio);

            if (duracao_episodio >= 2) //forma mais eficiente de verificar a quantidade de episódios.
            {
                streaming.cadastrar_serie(video); 
            }
        }
        else if (tipo == "Nota") 
        {
            int id, nota; 
            std::cin >> id >> nota; 
            std::cin.ignore(); 

            if (nota >= 0 && nota <= 10)
            {
                streaming.avaliacao(id, nota); 
            }
        }
    }

    streaming.print_catalogo(); 

    return 0;
}