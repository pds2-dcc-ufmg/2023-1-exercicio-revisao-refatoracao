#include "Streaming.hpp"
#include "Video.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

//constantes determinadas no READ.ME
const int tempo_minimo_filme = 50;
const int numero_minimo_episodios = 2;
const int nota_minima = 0;
const int nota_maxima = 10;

int main(){
Streaming streaming;
std::string comando;

while (std::cin >> comando) {
  
//criação e cadastro de filme ao streaming de acordo com as condições de tempo mínimo estipuladas (mínimo de 50 minutos de duração).  
  if (comando == "Filme"){
    std::string nome, genero;
    int ano, duracao;
    std::cin >> genero >> ano >> duracao;
    std::getline(std::cin, nome);
  
    Video *filme = new Video(nome, ano, genero, "Filme", duracao, 0, 0);
    
    if (duracao >= tempo_minimo_filme){
      streaming.cadastrar_filme(filme);
      }
    }
  
//criação e cadastro de série ao streaming de acordo com as condições de episódios estipuladas (mínimo de dois episódios). 
  if (comando == "Serie") {
    std::string nome, genero;
    int ano, numero_temporadas, total_episodios;
    std::cin >> genero >> ano >> numero_temporadas >> total_episodios;
    std::getline(std::cin, nome);
    
    Video *serie = new Video(nome, ano, genero, "Serie", 0, numero_temporadas, total_episodios);
    
    if (total_episodios >= numero_minimo_episodios) {
      streaming.cadastrar_serie(serie);
    }
  }

// avaliação de vídeo do streaming de zero a dez.
  if (comando == "Nota") {
    int id, nota;
    std::cin >> id >> nota;
    
    if (nota >= nota_minima && nota <= nota_maxima) {
      streaming.avaliacao(id, nota);
    }
  } 

  if(comando=="fim"){
    streaming.print_catalogo();
  }
  
}

streaming.print_catalogo();

return 0;
}
