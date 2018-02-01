#include<stdio.h>

int main()
{
  int c, s = 0, ci[10], ac = 0, i;

  for (i = 0; i < 10; i++){
    ci[i] = 0;
  }
  
  while( (c = getchar() ) != EOF){
    if ( c >= '0' && c <= '9')
      ci[c-'0']++;
    else if ( c == ' ' || c == '\n' || c == '\t') s++;
    else ac++;
  }
  
  printf("Cifre:\n");
  
  for (i = 0; i < 10; i++){
    printf("%d) %d\n", i, ci[i]);
  }

  printf("Ci sono %d spaziature, %d di caratteri restanti\n", s, ac);
  return 0;
  }
