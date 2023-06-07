#ifndef STREAMING_HPP
#define STREAMING_HPP

#include "Video.hpp"
#include <vector>

class Streaming {
private:
    std::vector<Video*> _catalogo;

public:
    void cadastrar_video(Video* video);
    void avaliar_video(unsigned int id, unsigned int nota);
    void imprimir_catalogo();
};

#endif
