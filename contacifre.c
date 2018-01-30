#include<stdio.h>

int main()
{
  int c, s = 0, ci = 0, ac = 0;

  while( (c = getchar()) != EOF){
    if ( c == ' ' || c == '\n' || c == '\t') s++;
    else if (c >= '0' && c <= '9') ci++;
    else ac++;
  }
  printf("Ci sono %d spaziature, %d cifre e %d di caratteri restanti\n", s, ci, ac);
  return 0;
  }
