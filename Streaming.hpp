#include "Video.hpp"
#include <vector>

class Streaming
{
    private:
        std::vector<Video*> _catalogo;

    public:
        void cadastrar_video(Video *v);
        void avaliacao(int id, int nota);
        void print_catalogo();
};