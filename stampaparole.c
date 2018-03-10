/*
 * stati
 * IN -> ALL'INTERNO DELLA PAROLA
 * OUT -> ALL'ESTERNO DELLA PAROLA
 *
 * da IN a IN -> if c != ' ' or c != '/t' or c != '/n'
 * da IN a OUT -> if c == ' ' or c == '/t' or c == '/n'
 * da OUT a OUT -> impossibile
 * da OUT a IN -> if c!= ' ' or c != '/t' or c != '/n'
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
			       	stato = IN;
				putchar('\n');
			}
			
		}
		else if (stato == OUT){
			stato = IN;
		}
	}
	return 0;
}
