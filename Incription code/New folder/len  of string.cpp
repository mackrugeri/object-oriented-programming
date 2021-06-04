#include <iostream>
#include <cctype>
#include <string.h>

using namespace std;

int main(){

  char *str = "sgsgdvsdb";
  int len = str.len(str);

  for (int i=0; i<len; i++){
      if (isdigit(*(str+i))){
        cout << *(str+i);
      }
  }

  cout << endl;


return 0;   
}
