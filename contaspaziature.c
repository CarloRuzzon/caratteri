#include<stdio.h>

int main(){
  int c, s = 0,nw = 0, t = 0;

  while( (c = getchar()) != EOF){
    if (c == ' ') s++;
    if (c == '\n') nw ++;
    if (t == '\t') t++;
  }
  printf("Ci sono: %d spazi, %d newline e %d tabulazioni.\n", s, nw, t);
  return 0;
}
