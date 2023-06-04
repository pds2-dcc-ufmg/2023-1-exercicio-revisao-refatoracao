#ifndef STREAMING_H
#define STREAMING_H

#include "Filme.hpp"
#include "Serie.hpp"

#include <vector>

using namespace std;

class Streaming{ 
	private:
		vector<Video*> _Catalogo;

	public:
		void Cadastrar_Filme(Filme* F);
		void Cadastrar_Serie(Serie* S);

		void Avaliar(int Id, int Nota);

		void Printar_Catalogo();
};

#endif