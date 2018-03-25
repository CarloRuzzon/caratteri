/*
 * stati
 * IN -> ALL'INTERNO DELLA PAROLA
 * OUT -> ALL'ESTERNO DELLA PAROLA
 *
 * Stato   carattere in ingresso                   carattere in uscita  nuovo stato
 * in      c != ' ' && c!= '\t' && c != '\n'       c                    in
 * in      c == ' ' or c == '\t' or c == '\n'      \n                   out
 * OUT     c!= ' ' or c != '\t' or c != '\n'       c                    in
 */
#include<stdio.h>

int main(){
	int c;
	enum STATO {IN, OUT};
	enum STATO stato = OUT;

	while ((c = getchar()) != EOF){
		if (stato == IN){
      if (c != ' ' && c!= '\t' && c!= '\n'){
        putchar(c);
      }
      else{
        stato = OUT;
        putchar('\n');
      }
    }
    else if (stato == OUT){
      stato = IN;
      putchar(c);
    }
  }
  return 0;
}



