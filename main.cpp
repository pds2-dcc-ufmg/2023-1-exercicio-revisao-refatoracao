#include "Streaming.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main() {
	Streaming streaming;
	string tipo;

	while (cin >> tipo) {
		if (tipo == "Filme") {
			string nome, genero;
			int ano, duracao;
			cin >> genero >> ano >> duracao;
			getline(cin, nome);

			Filme* f = new Filme(nome, ano, genero, duracao);
			if (duracao >= 50) {
				streaming.cadastrar_filme(f);
			}
			else {
				cout << "Duração inválida" << endl;
			}
		}

		else if (tipo == "Serie") {
			string nome, genero;
			int ano, n_temp, total_ep;
			cin >> genero >> ano >> n_temp >> total_ep;
			getline(cin, nome);
			Serie* s = new Serie(nome, ano, genero, n_temp, total_ep);

			if (total_ep >= 2) {
				streaming.cadastrar_serie(s);
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

		else {
			cout << "Tipo inválido" << endl;
		}
	}
	return 0;
}
