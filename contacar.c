#include<stdio.h>

int main(){
  int c, cc = 0;
  while( (c = getchar()) != EOF) cc++;
  printf("Il numero dei caratteri inseriti e': %d\n", cc);
  return 0;
}

