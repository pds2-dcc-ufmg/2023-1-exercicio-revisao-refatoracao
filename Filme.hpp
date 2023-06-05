#ifndef FILME_HPP
#define FILME_HPP

#include <string>
#include <iostream>
#include <list>

class Filme : public Video{
private:
int _ano, _filme_duracao;
std::string _nome, _genero;

public:
Filme(std::string nome, int ano, std::string genero, int filme_duracao);

void print_info(int id);
};

#endif
