#ifndef FILME_HPP
#define FILME_HPP

#include "Video.hpp"

class Filme : public Video{
	private:
		int _duracaoFilme;
		
	public:
		Filme(std::string nome, int anoLancamento, std::string genero, int duracaoFilme);
		
		virtual void printInfo(int id) override;
};

#endif
