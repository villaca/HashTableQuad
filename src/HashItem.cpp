#include "HashItem.h"


      HashItem::HashItem(int chave, string info) {
            this->chave = chave;
            this->info = info;
      }

      int HashItem::getChave() {
            return chave;
      }

      string HashItem::getInfo() {
            return info;
      }
