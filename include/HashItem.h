#ifndef HASHItem_H
#define HASHItem_H

#include <string>
using namespace std;

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
