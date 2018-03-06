/*stati:
 * A = all'interno della parola
 * B = all'esterno della parola
 
  TABELLA

  A -> B : se c == ' ' or c == '\t' or c == '\n' 
  A -> A : se c != ' ' and c != '\t' and c != '\n'
  B -> B : supponendo che non ci siano doppi spazi, opzione impossibile 
  B -> A : se c != ' ' and c != '\t' and c != '\n'

 */
#include<stdio.h>


int main()
{
  int c, p = 0, cc = 0, r = 0; 
  
  enum STATO {A, B};
  
  enum STATO stato = B;
  
  while ((c = getchar()) != EOF){
    
	  cc++;

	  if (c == '\n') r++;
	  
	  if (stato == A){
		  if (c == '\t' || c == '\n' || c == ' '){
			  stato = B;
		  }
	  }
	  
	  else if(stato == B){
		p++;
		stato = A;
	  }	
    
  } 
  printf("Ci sono: %d caratteri, %d righe e %d parole.\n", cc, r, p);
  return 0;
}


