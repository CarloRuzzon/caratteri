#include<stdio.h>

int main(){
  int c;

  printf("Dimmi qualcosa: ");
  
  while ( (c = getchar()) != '\n' && c != EOF ){
    putchar(c);
  }
  putchar('\n');
  return 0;
}
