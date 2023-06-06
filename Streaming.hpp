#ifndef STREAMING_HPP
#define STREAMING_HPP

#include <string>
#include <vector>
#include "Video.hpp"

class Streaming {
public:
    void cadastrar_video(Video* v);
    void avaliacao(int id, int nota);
    void print_catalogo();

private:
    std::vector<Video*> catalogo;
};

#endif
