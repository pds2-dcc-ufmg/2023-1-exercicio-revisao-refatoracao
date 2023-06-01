#ifndef VIDEO_HPP
#define VIDEO_HPP


#include <iostream>
#include <list>


class Video {
  private:

    std::list<unsigned int> _avaliacoes;
    std::string _nome, _genero, _subtipo;
    int _ano, _filme_duracao, _n_temp, _total_ep;

  public:

    Video(std::string nome, std::string genero,std::string subtipo,
          int ano,int filme_duracao, int n_temp, int total_ep);
    
    
    float get_media_avaliacao();


    void avaliar(unsigned int nota);


    void print_info(unsigned int id);
    

    void simples();
  
};


#endif
