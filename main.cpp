#include "Streaming.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main(){
	Streaming streaming;
	string tipo;

	while (cin >> tipo) {
		if (tipo == "Filme"){
			string nome, genero;
			int n_temp = 0, total_ep = 0, ano, duracao;
			cin >> genero >> ano >> duracao;
			getline(cin, nome);

			Video* v = new Video(nome, ano, genero, tipo, duracao, n_temp, total_ep);
			if (duracao >= 50){
				streaming.cadastrar_filme(v);
			}
			else {
				cout << "Duração inválida" << endl;
			}
		}

		else if (tipo == "Serie") {
			string nome, genero;
			int ano, n_temp, total_ep, filme_duracao = 0;
			cin >> genero >> ano >> n_temp >> total_ep;
			getline(cin, nome);
			Video* v = new Video(nome, ano, genero, tipo, filme_duracao, n_temp, total_ep);

			if (total_ep >= 2) {
				streaming.cadastrar_serie(v);
			}
			else {
				cout << "Número de episódios insuficiente" << endl;
			}
		}

		else if (tipo == "Nota") {
			int id, nota;
			cin >> id >> nota;

			if (nota <= 10 && nota >= 0) {
				streaming.avaliacao(id, nota);
			}
		}

		else if (tipo == "Mostrar") {
			streaming.print_catalogo();
		}
	}
	return 0;
}
