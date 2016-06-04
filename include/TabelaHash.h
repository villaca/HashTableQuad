#ifndef TabelaHash_H
#define TabelaHash_H

#include <iostream>
#include "HashItem.h"

//const int TAMANHO = 7;

class TabelaHash {
private:
    int TAMANHO;
    HashItem **tabela;
    int f_hash(int itemChave, int tentativa);
public:
      TabelaHash();
      TabelaHash(int tamanho);
      int busca(int chave); // se encontrar a chave retorna o indice da tabela. caso contrário, retorna -1		EXERCÍCIO
      string informacao(int chave); // retorna a informação correspondente a chave
//   void insere(int chave, string info);
 	  void insere(int chave);
	  void remove(int chave);						//	EXERCÍCIO
 	  void imprimeTabela();
      void imprimeItens();
	  ~TabelaHash();
};

#endif
