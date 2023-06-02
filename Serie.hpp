#ifndef SERIE_HPP
#define SERIE_HPP


#include "Video.hpp"


class Serie : public Video {
  private:

    int _n_temp, _total_ep;

  public:

    Serie(std::string nome, std::string genero, int ano, int n_temp, int total_ep);
    
    ~Serie();
    
    float get_media_avaliacao() override;


    void avaliar(unsigned int nota) override;


    void print_info(unsigned int id) override;
  
};


#endif
