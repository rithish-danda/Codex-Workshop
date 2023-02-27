//guess the ouput
#include "stdio.h"
int main(){
  int i=-1,j=-1,k=0,l=2,m,n;
  m=i++&&j++&&k++|l++;
  n=n++&&j++&&k++|l++---m;
  printf("%d %d",m,n);
}
