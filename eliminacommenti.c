#include<stdio.h>
/*
Stato:		carattere in ingresso: 		carattere in uscita:		nuovo stato:
OUT		c != /				c				OUT
OUT		c == /				NULL				attesa_slash
attesa_ast      c != *				/ + c				OUT
attesa_ast      c == *      			NULL				IN
IN		c != / 				NULL				IN
IN 		c == /				NULL				attesa_ast
attesa_slash	c != *				NULL				IN
attesa_slash    c == *                          NULL  				OUT
*/
int main(){
  int c;
  char r;
  enum STATO_A {out, in};
  enum STATO_A stato_a;
  enum STATO_B {f, a_a};
  enum STATO_B stato_s;
  stato_a = out;
  stato_s = f;

  while( (c = getchar()) != EOF){
    if (stato_a == out){
      if(stato_s == f){
        if (c == '/'){
          stato_s = a_a;
          r = c;
        }

        else{
          putchar(c);
        }
      }
       else if (stato_s == a_a){
        if(c == '*'){
          stato_a = in;
          stato_s = f;
        }
        else{
          putchar(r);
          putchar(c);
          stato_s = f;
        }
      }
    }
    else if (stato_a == in){
      if (stato_s == f){  
      if (c == '*'){
          stato_s = a_a;
        }
      }
      else if (stato_s == a_a){
        if(c == '/' ){
          stato_s = f;
          stato_a = out;
        }
        else{
          stato_s = f;
        }
    }
  }
  }
  return 0;
}
