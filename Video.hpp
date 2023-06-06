#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <iostream>
#include <list>


class Video {
	protected:
		int _anoLancamento;
		
		std::string _nome;
		std::string _genero;
		std::list<int> _avaliacoes;
		
	public:
		Video(std::string nome, int anoLancamento, std::string genero);
		
		float getMediaAvaliacao();
		void avaliar(int nota);
		virtual void printInfo(int id) = 0;
};

#endif
