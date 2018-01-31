#include<stdio.h>

int main()
{
  int c, stato, NORM = 0, A = 1;
  stato = NORM;
  while( (c = getchar()) != EOF){
    if (stato == NORM){
      if (c == ' ') stato = A;
      putchar(c);
    }
    else if( stato == A){
      if (c != ' '){
        putchar(c);
        stato = NORM; 
      }
    }
  }
  return 0;
}


