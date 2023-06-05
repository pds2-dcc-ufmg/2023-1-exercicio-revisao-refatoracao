#ifndef SERIE_HPP
#define SERIE_HPP

#include <string>
#include <iostream>
#include <list>

class Serie : public Video{
private:
int _numero_temporadas, _total_episodios;

public:
Serie(std::string nome, int ano, std::string genero, int numero_temporadas, int total_episodios);

void print_info(int id);
};

#endif
