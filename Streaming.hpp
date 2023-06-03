
#include <string>
#include <vector>

#include "Video.hpp"

using namespace std;

class Streaming { 
public:
vector<Video*> _catalogo;

// Função para cadastrar filme
void cadastrar_filme(Video *v)
{
  _catalogo.push_back(v);
};

//Função para cadastrar serie
void cadastrar_serie(Video *v)
{
  _catalogo.push_back(v);
};

//Função para adcionar avaliação
void avaliacao(int id, int nota) {
  _catalogo[id - 1]->avaliar(nota);
};

//Função para mostrar catalogo
void print_catalogo()
{
  if (_catalogo.size()==0)
    cout << "Sem video cadastrado!" << endl;
  else {
    cout << "Catalogo Streaming:";
    cout << endl;
    int i = 0;;
    for (vector<Video*>::iterator it = _catalogo.begin(); it != _catalogo.end(); it++) {
      (*it)->print_info(i + 1);
      i++;
    }
  }
};


};
