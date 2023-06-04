#include "Streaming.hpp"
#include <iostream>
#include <string>

int main()
{
    Streaming ss;
    std::string t;

    while (std::cin >> t)
    {
        if (t == "Filme")
        {
            std::string n, g;
            int a, d;
            std::cin >> g >> a >> d;
            std::cin.ignore(); // Ignorar o caractere de nova linha após a leitura de 'd'
            std::getline(std::cin, n);

            if (d >= 50)
            {
                ss.cadastrar_filme(new Video(n, a, g, t, d, 0, 0));
            }
        }
        else if (t == "Serie")
        {
            std::string n, g;
            int a, nt, te;
            std::cin >> g >> a >> nt >> te;
            std::cin.ignore(); // Ignorar o caractere de nova linha após a leitura de 'te'
            std::getline(std::cin, n);

            if (te >= 2)
            {
                ss.cadastrar_serie(new Video(n, a, g, t, 0, nt, te));
            }
        }
        else if (t == "Nota")
        {
            int i, n;
            std::cin >> i >> n;

            if (n >= 0 && n <= 10)
            {
                ss.avaliacao(i, n);
            }
        }
    }

    ss.print_catalogo();

    return 0;
}
