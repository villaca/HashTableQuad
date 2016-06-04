#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<stdio.h>

#include "TabelaHash.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc) {

    int tam;

    cout << "Entre com o tamanho da tabela desejado: " << endl;
    cin >> tam;

    TabelaHash T(tam);
///*
	T.insere(76); //0
	T.insere(93); //1
	T.insere(40); //2
	T.insere(35); //3
	T.insere(47);
	//T.insere(10);
	//T.insere(17);

	T.imprimeTabela();
	getchar();

	T.insere(13);
	getchar();

	T.imprimeItens();
	getchar();

	cout << "Encontrei a chave no indice: " << T.busca(21) << endl;

	T.remove(21);

    cout << "Encontrei a chave no indice " << T.busca(21) << endl;

    T.imprimeTabela();
    getchar();

    T.insere(10);

    T.imprimeTabela();
    getchar();

    T.remove(10);

    T.imprimeTabela();
    getchar();

//*/
 /*
    int i, novoAleatorio;
    for(i=1 ; i <= 8 ; i++) {
		novoAleatorio = rand()%100;
		T.insere(novoAleatorio);
	}
	T.imprimeTabela();
	getchar();

	T.imprimeItens();
	getchar();
//*/

}
