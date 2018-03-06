/*
 * stati
 * IN -> ALL'INTERNO DELLA PAROLA
 * OUT -> ALL'ESTERNO DELLA PAROLA
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
		}
	}
	return 0;
}
