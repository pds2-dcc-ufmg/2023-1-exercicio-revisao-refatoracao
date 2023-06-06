#ifndef STREAMING_HPP
#define STREAMING_HPP

#include <memory>
#include <vector>
#include "Video.hpp"

class Streaming
{
private:
    std::vector<std::unique_ptr<Video>> catalogo;

public:
    void cadastrar_filme(const Video &video);
    void cadastrar_serie(const Video &video);
    void avaliacao(int id, int nota);
    void print_catalogo() const;
};

#endif