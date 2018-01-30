#include<stdio.h>

int main()
{
  int c, stato, NORM = 0, A = 1;
  while( (c = getchar()) != EOF){
    stato = NORM;
    if (stato == NORM){
      if (c != ' ') putchar(c);
      else stato = A;
    }
    else if( stato == A){
      if (c != ' '){
        putchar(' ');
        putchar(c);
      }
      else putchar(' ');
    }
  }
  return 0;
}


