#ifndef SERIE_HPP
#define SERIE_HPP

#include "Video.hpp"

class Serie : public Video{
	private:
		int _numeroTemporadas;
		int _totalEpisodios;
		
	public:
		Serie(std::string nome, int anoLancamento, std::string genero, int _numeroTemporadas, int _totalEpisodios);
		
		virtual void printInfo(int id) override;
};

#endif
