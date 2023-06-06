#include "Streaming.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

int main() {
Streaming ss;
std::string t;

   while (std::cin >> t) {
    if (t == "Filme") {
        std::string n, g;
        int a, d;
        std::cin >> g >> a >> d;
        std::cin.ignore();
        std::getline(std::cin, n);

        Video* v = new Video(n, a, g, t, d, 0, 0);
        if (d >= 50) {
            ss.cadastrar_filme(v);
        }
    } else if (t == "Serie") {
        std::string n, g;
        int a, nt, te;
        std::cin >> g >> a >> nt >> te;
        std::cin.ignore();
        std::getline(std::cin, n);

        Video* v = new Video(n, a, g, t, 0, nt, te);
        if (te >= 2) {
            ss.cadastrar_serie(v);
        }
    } else if (t == "Nota") {
        int i, n;
        std::cin >> i >> n;

        if (n >= 0 && n <= 10) {
            ss.avaliacao(i, n);
        }
    }
}

ss.print_catalogo();

return 0;
}
