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
      int busca(int chave); // se encontrar a chave retorna o indice da tabela. caso contr�rio, retorna -1		EXERC�CIO
      string informacao(int chave); // retorna a informa��o correspondente a chave
//   void insere(int chave, string info);
 	  void insere(int chave);
	  void remove(int chave);						//	EXERC�CIO
 	  void imprimeTabela();
      void imprimeItens();
	  ~TabelaHash();
};

#endif
