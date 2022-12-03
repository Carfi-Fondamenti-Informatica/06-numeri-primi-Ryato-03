#include "lib.h"
using namespace std;

bool primo(int numero, int i) {
  int resto=numero%i;
  
  if(numero<=i)return true;
  if(resto==0&&i>1)return false;
  if(resto!=0) {
    i++;
    primo(numero, i);
  }
  else return true; 
}
