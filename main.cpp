#include "Streaming.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

int main()

{
    Streaming streaming;
    string type;

    while (cin >> type)
    {
        if (type == "Filme")

        {
            string n, g;
            int a, d;
            cin >> g >> a >> d;
            getline(cin, n);

            Video *v;
            v = new Video(n, a, g, type, d, 0, 0);
            if (50 <= d)

            {
                streaming.cadastrarFilme(v);
            }
        }
        else if (type == "Serie")
        {

            string n;
            string g;
            int a, nt, te;
            cin >> g >> a >> nt >> te;
            getline(cin, n);
            Video *v;
            v = new Video(n, a, g, type, 0, nt, te);
            if (2 <= te)
            {
                {
                    streaming.cadastrarSerie(v);
                }
            }
        }

        else if (type == "Nota")
        {
            int i, n;
            cin >> i >> n;

            if (n <= 10)
            {
                if (n >= 0)
                {
                    streaming.avaliacao(i, n);
                }
            }
        }
    }
    streaming.printCatalogo();

    return 0;
}
