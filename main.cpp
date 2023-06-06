#include "Streaming.hpp"
#include "Filme.hpp"
#include "Serie.hpp"
#include <iostream>


int main()
{
    Streaming ss;
    string t;

    while (cin >> t) {
        if (t == "Filme") {
            string n, g;
            int a, d;
            cin >> g >> a >> d;
            getline(cin, n);
            Video *v = new Filme(n, a, g, d);
            ss.cadastrar_video(v);
        } else if (t == "Serie") {
            string n, g;
            int a, nt, te;
            cin >> g >> a >> nt >> te;
            getline(cin, n);
            Video *v = new Serie(n, a, g, nt, te);
            ss.cadastrar_video(v);
        } else if (t == "Nota") {
            int i, n;
            cin >> i >> n;
            if (n >= 0 && n <= 10) {
                ss.avaliacao(i, n);
            }
        }
    }

    ss.print_catalogo();

    return 0;
}
