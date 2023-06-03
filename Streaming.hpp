#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include "Video.hpp"

class Streaming {
private:
    std::vector<Video*> catalogo;

public:

    void cadastrar_video(Video* v);

    void avaliar_video(int id, int nota);

    void imprimir_catalogo() const;
};
