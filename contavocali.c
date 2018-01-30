#include<stdio.h>

int main()
{
  int c, v = 0;

  while ( (c = getchar()) != EOF){
    switch(c){
      case 'a':
        v ++;
        break;

      case 'e':
        v++;
        break;

      case 'i':
        v++;
        break;

      case 'o':
        v++;
        break;

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

