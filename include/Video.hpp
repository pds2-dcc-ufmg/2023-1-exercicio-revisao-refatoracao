#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <iostream>
#include <list>

using namespace std;

class Video{
	private:
		int _Ano, _Id;
		string _Nome, _Genero, _Subtipo;
		list<int> _Avaliacoes;

	public:
		Video(string Nome, int Ano, int Id, string Genero, string Subtipo);

		void Avaliar(int Nota);

		float getAvaliacao();
		int getId();
		int getAno();
		string getNome();
		string getGenero();
		string getSubtipo();
};

#endif
