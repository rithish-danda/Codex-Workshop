//guess the output
#include "stdio.h"

int main(){
  char c=250;
  int a;
  a=c+!c+~c+++c;
  printf("%d %d",a,c);
}
