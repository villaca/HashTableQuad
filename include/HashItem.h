#ifndef HASHItem_H
#define HASHItem_H

#include <string>

/*
 *Grupo 4
 * Daniel Villaça
 * Thiago Albuquerque
 * Gabriel Teixeira
 */


using namespace std;
using std::string;

class HashItem {
private:
      int chave;
      string info;
public:
      HashItem(int chave, string info);
      int getChave();
      string getInfo();

};

#endif
