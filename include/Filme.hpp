#include "Video.hpp"

class Filme: public Video
{
private:
    int filme_duracao;
public:
    Filme(std::string nome, int ano, std::string genero, int filme_duracao):
        Video (nome, ano, genero), filme_duracao(filme_duracao) {};
    ~Filme() = default;
    void print_info(int id) override;
};
