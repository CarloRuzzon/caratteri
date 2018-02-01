#include<stdio.h>

int main()
{
  int c, v = 0;

  while ( (c = getchar()) != EOF){
    switch(c){
      case 'a':

      case 'e':

      case 'i':

      case 'o':

      case 'u':
        v++;
        break;

      default:
        break;
    }
  }
  printf("Ci sono %d vocali.\n", v);
  return 0;
  }

