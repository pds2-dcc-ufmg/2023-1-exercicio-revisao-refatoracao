
#include <string>
#include <vector>

#include "Video.hpp"

using namespace std;

class Streaming
{
public:
  vector<Video *> catalogo;

  void cadastrarFilme(Video *v)
  {
    catalogo.push_back(v);
  }

  void cadastrarSerie(Video *v)
  {
    catalogo.push_back(v);
  }

  void avaliacao(int id, int nota)
  {
    catalogo[id - 1]->avaliar(nota);
  }

  void printCatalogo()
  {
    if (catalogo.size() == 0)
      cout << "Sem video cadastrado!" << endl;
    else
    {
      cout << "Catalogo Streaming:";
      cout << endl;
      int i = 0;
      ;
      for (vector<Video *>::iterator it = catalogo.begin(); it != catalogo.end(); it++)
      {
        (*it)->printInfo(i + 1);
        i++;
      }
    }
  }
};
