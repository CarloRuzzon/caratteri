#include<stdio.h>
/*
Stato:		          carattere in ingresso: 		carattere in uscita:		nuovo stato:
OUT		              c != /				             c                      OUT
OUT		                c == /				          NULL            				attesa_ast
OUT                 c == "                    c                       virgoletta
OUT                 c == '                    c                       apice

apice               c != '                    c                       apice
apice               c == '                    c                       OUT

virgoletta          c != "                    c                       virgoletta
virgoletta          c == "                    c                       OUT

attesa_ast          c != *				            / + c			             	OUT
attesa_ast          c == *      			        NULL			            	IN

IN		              c != * 				            NULL	                  IN
IN 		              c == *				            NULL	                  attesa_slash

attesa_slash	      c != /				            NULL				            IN
attesa_slash        c == /                    NULL             				OUT
*/
int main(){
  int c;
  enum STATO {out, in, a_s, a_a, virgoletta, apice};
  enum STATO stato;
  stato = out;

  while( (c = getchar()) != EOF){
    if (stato == out){
      
      if (c == '\''){
        putchar(c);
        stato = apice;
      }

      else if (c == '"'){
        putchar(c);
        /*prova*/
        stato = virgoletta;
      }
      else if(c == '/'){
        stato = a_a;
      }
      
      else{
        putchar(c);
      }
    }

    else if (stato == apice){
      if (c != '\''){
        putchar(c);
      }
      else{
        putchar(c);
        stato = out;
      }
    }

    else if (stato == virgoletta){
      if (c != '"'){
        putchar(c);
      }
      else{
        putchar(c);
        stato = out;
      }
    }

    else if (stato == a_a){
        
      if(c == '*'){
        stato = in;
      }

      else{
        putchar('/');
        putchar(c);
        stato = out;
      }
    }
    
    else if (stato == in){
      
      if (c == '*'){  
          stato = a_s;
      }
    }
    
    else if (stato == a_s){
      
      if (c == '/'){
          stato = out;
      }

      else{
        stato = in;
      }
    }
  }
  return 0;
}
