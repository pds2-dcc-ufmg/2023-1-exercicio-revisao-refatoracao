#include "Streaming.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

int main()
{
    std::string t;

    Streaming ss;

    while (std::cin >> t) {
        if (t == "Filme") {
            std::string n, g;
            int a, d;
            std::cin >> g >> a >> d;
            std::getline(std::cin, n);

            Video* v;
            v = new Video(n, a, g, t, d, 0, 0);

            if (50 <= d) {
                ss.cadastrar_filme(v);
            }
        }

        if (t == "Serie") {
            std::string n, g;
            int a, nt, te;
            std::cin >> g >> a >> nt >> te;
            std::getline(std::cin, n);

            Video* v;
            v = new Video(n, a, g, t, 0, nt, te);

            if (2 <= te) {
                ss.cadastrar_serie(v);
            }
        }

        if (t == "Nota") {
            int i, n;
            std::cin >> i >> n;

            if (n <= 10 && n >= 0) {
                ss.avaliacao(i, n);
            }
        }
    }

    ss.print_catalogo();

    return 0;
}
