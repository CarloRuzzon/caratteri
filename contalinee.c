#include<stdio.h>

int main(){
  int c, l = 0;
   while ( (c = getchar()) != EOF)
     if (c == '\n') l++;
   printf("Le linee sono : %d\n", l);
   return 0; 
}
