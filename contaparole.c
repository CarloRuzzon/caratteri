#include<stdio.h>

int main()
{
  int c, p = 0, cc = 0, r = 0; 

  while ((c = getchar()) != EOF){
    
    if (c == ' '){
      p++;
    }
    
    else if (c == '\n'){
      r++;
    }
    else{
      cc++;
    }
  } 
  printf("Ci sono: %d caratteri, %d righe e %d parole.\n", cc, r, p);
  return 0;
}


