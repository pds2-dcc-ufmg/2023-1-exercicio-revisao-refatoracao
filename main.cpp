#include "Streaming.hpp"
#include <iostream>
#include <list>
#include <string>
#include <vector>


int main()

{
Streaming ss;
std::string tipo;

while (std::cin >> tipo) {
if (tipo == "Filme")

{
std::string nome, genero;
int ano, duracao;
std::cin >> genero >> ano >> duracao;
std::getline(std::cin, nome);

Video *v;
v = new Video(nome, ano, genero, tipo, duracao, 0, 0);
if (50 <= duracao)

{
ss.cadastrar_filme(v);
}
}
if (tipo == "Serie") {

std::string nome;
std::string genero;
int ano, n_temp, total_ep;
std::cin >> genero >> ano >> n_temp >> total_ep;
std::getline(std::cin, nome);
Video *v;
v = new Video(nome, ano, genero, tipo, 0, n_temp, total_ep);
if (2 <= total_ep) {
{
ss.cadastrar_serie(v);
}
}
}

if (tipo == "Nota") {
int id, nota;
std::cin >> id >> nota;

if (nota <= 10) {
if (nota >= 0) {
ss.avaliacao(id, nota);
}
}
}
}
ss.print_catalogo();

return 0;
}