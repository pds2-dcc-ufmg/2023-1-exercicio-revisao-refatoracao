#ifndef SERIE_HPP
#define SERIE_HPP

#include <string>
#include <iostream>
#include "Video.hpp"

class Serie : public Video {
private:
    int _n_temp, _total_ep;

public:
    Serie(std::string nome, int ano, std::string genero, int n_temp, int total_ep);
    void print_info(int id) override;
};

#endif
