#include "TabelaHash.h"

using namespace std;

   /*TabelaHash::TabelaHash() {
        TAMANHO = 7;
        tabela = new HashItem*[TAMANHO];
        for (int i = 0; i < TAMANHO; i++)
            tabela[i] = NULL;
    };*/

    TabelaHash::TabelaHash(int tamanho = 7) {
        cout << tamanho << endl;
        TAMANHO = tamanho;
        tabela = new HashItem*[tamanho];
        for (int i = 0; i < tamanho; i++)
            tabela[i] = NULL;
    }

    int TabelaHash::f_hash(int itemChave, int tentativa){
        if(tentativa == 0){
            return (itemChave + tentativa*tentativa) % TAMANHO;
        }
        else{
            return (f_hash(itemChave, tentativa - 1) + tentativa)% TAMANHO;
        }

    }

    int TabelaHash::busca(int chave){
        int hash = f_hash(chave,0);
        int tentativa = 1;

        while (tabela[hash] != NULL && tabela[hash]->getChave() != chave && tentativa <= TAMANHO){
            hash = f_hash(chave,tentativa);
            tentativa++;

        }

        if (tentativa>TAMANHO) cout << "\nChave nao encontrada.\n";
        else return hash;

        return -1;

    }

//	  string TabelaHash::informacao(int chave) {}

//	  string TabelaHash::Info(int chave) {

//   void TabelaHash::insere(int chave, string info) {}
    void TabelaHash::insere(int chave) {

        int hash = f_hash(chave,0);
        int tentativa = 1;

        cout << "\n Tentativa " << tentativa << " de chave " << chave << " endereco: " << hash << "\n";  // somente para visaulizar

        while( (tabela[hash] != NULL) && (tabela[hash]->getChave() != chave) && (tentativa <= TAMANHO)){
            hash = f_hash(chave,tentativa);
            tentativa++;

            if (tentativa <= TAMANHO) cout << "\n Tentativa " << tentativa << " de chave " << chave << " endereco: " << hash << "\n";  // somente para visaulizar

        }

        if (tentativa>TAMANHO) cout << "\n Tabela Cheia \n";
        else tabela[hash] = new HashItem(chave," ");

    }

    void TabelaHash::remove(int chave){
        int indice = busca(chave);
        if(indice != -1){
            tabela[indice] = NULL;
        }
    }


    void TabelaHash::imprimeTabela(){
        cout <<"\n\n";
        for (int i=0; i< TAMANHO; i++){
            cout << " Compartimento " << i << ":";
            if (tabela[i] != NULL) cout << tabela[i]->getChave() << "\n";
            else cout << " \n";
        }
    }

    void TabelaHash::imprimeItens(){
        cout <<"\n\n Itens na tabela: {";
        for (int i=0; i< TAMANHO; i++){
            if (tabela[i] != NULL) cout <<tabela[i]->getChave() << ", ";
        }
        cout <<"/}\n";
    }

    TabelaHash::~TabelaHash() {
        for (int i = 0; i < TAMANHO; i++)
            if (tabela[i] != NULL)
                delete tabela[i];
        delete[] tabela;
    }

