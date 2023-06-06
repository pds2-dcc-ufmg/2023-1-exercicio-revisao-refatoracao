# Descrição das soluções utilizadas.

Neste projeto de refatoração melhorei o projeto original, apliquei diversas práticas recomendadas de programação aprendidas em aula.
Aqui estão algumas das principais mudanças que fiz:

 Nomenclatura -> Renomeei várias variáveis e métodos para torná-los mais autoexplicativos, reduzindo o numero de comentarios necessários para o entendimento do programa. Por exemplo, 'n_temp' (o que é isso? n do que? temp é temperatura?) foi renomeado para 'num_temporadas' e 'avaliacao' para 'adicionar_avaliacao'

 Formatação -> Trabalhei na formatação do código para torná-lo mais legível. Como melhorar a indentação e adicionar mais espaços o que torna o código mais facil de ler.

 Conceitos de OO ->Refatorei o código para melhor utilizar os conceitos de OO aprendidos em aula. Criamos duas novas subclasses 'Filme' e 'Serie' que herdam da classe abstrata 'Video'

 Modularização -> Dividi o código em vários arquivos para tornar mais organizado e fácil de entender, o que facilita a adição de novas funções, manuntenção e trabalho em equipe. Por isso criei arquivos separadas para cada classe como 'Filme', 'Serie', 'Video' e 'Streaming'.

 Redundância de Código -> No código original, a classe Video era usada pra representar tanto filmes quanto séries, o que era redundante, ja que os mesmos campos eram usados para duas categorias, mas interpretados de maneira diferente. Outra razão para separar em 'Filme' e 'Serie'

 Uso de bibliotecas em exceso -> Antes o programa estava com bibliotecas em multiplos arquivos de forma desnecessária. Nesse código refatorado só usamos quando necessário. Por exemplo, foi retirado do main.cpp algumas bibliotecas que arquivos que ja estavam sendo incluidos utilizam.

 Por fim, também criei as exceções (Tempo minimo para filme 50 minutos, série deve ter ao menos 2 episodios, nota entre 1 e 10) para garantir que recebam um aviso caso algum dos casos sejam desobedecidos. 


