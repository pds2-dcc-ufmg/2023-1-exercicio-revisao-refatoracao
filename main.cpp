#include "Streaming.hpp"
#include <iostream>
#include <memory>
#include <string>

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

            std::unique_ptr<Video> v = std::make_unique<Video>(n, a, g, t, d, 0, 0);
            if (d >= 50) {
                ss.cadastrar_filme(v.get());
                v.release();
            }
        } else if (t == "Serie") {
            std::string n, g;
            int a, nt, te;
            std::cin >> g >> a >> nt >> te;
            std::cin.ignore();
            std::getline(std::cin, n);

            std::unique_ptr<Video> v = std::make_unique<Video>(n, a, g, t, 0, nt, te);
            if (te >= 2) {
                ss.cadastrar_serie(v.get());
                v.release();
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
