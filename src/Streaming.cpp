#include "Streaming.hpp"

void Streaming::Cadastrar_Filme(Filme* F){
    _Catalogo.push_back(F);
}

void Streaming::Cadastrar_Serie(Serie* S){
    _Catalogo.push_back(S);
}

void Streaming::Avaliar(int Id, int Nota){
    for(auto i : _Catalogo)
        if(i->getId() == Id)
            i->Avaliar(Nota);
}

void Streaming::Printar_Catalogo(){
    if(_Catalogo.size() == 0)
        cout << "Sem video cadastrado!" << endl;

    else{
        cout << "Catalogo Streaming:" << endl;

        vector<Video*>::iterator index = _Catalogo.begin();
        for(; index != _Catalogo.end(); ++index){
            //Identifica o subtipo do Video e o transforma em um ponteiro de Filme ou Serie a fim de chamar a função Imprimir_Informações()
            if((*index)->getSubtipo() == "Filme"){
                Filme* aux = static_cast<Filme*>(*index);
                aux->Imprimir_Informacoes();
            }

            else if((*index)->getSubtipo() == "Serie"){
                Serie* aux = static_cast<Serie*>(*index);
                aux->Imprimir_Informacoes();
            }
        }
    }
}