#include "Streaming.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main()
{
    Streaming streaming;
    string command;
    
    while (cin >> command) {
        if (command == "Filme") {
            string title, genre;
            int year, duration;
            cin >> genre >> year >> duration;
            cin.ignore();
            getline(std::cin, title);

            Video* video = new Video(title, year, genre, command, duration, 0, 0);
            if (duration >= 50) {
                streaming.cadastrar_filme(video);
            }
        }

        if (command == "Serie") {
            string title, genre;
            int year, numSeasons, totalEpisodes;
            cin >> genre >> year >> numSeasons >> totalEpisodes;
            cin.ignore();
            getline(std::cin, title);

            Video* video = new Video(title, year, genre, command, 0, numSeasons, totalEpisodes);
            if (numSeasons >= 2) {
                streaming.cadastrar_serie(video);
            }
        }

        if (command == "Nota") {
            int id, rating;
            cin >> id >> rating;

            if (rating >= 0 && rating <= 10) {
                streaming.avaliacao(id, rating);
            }
        }
    }

    streaming.print_catalogo();

    return 0;
}
