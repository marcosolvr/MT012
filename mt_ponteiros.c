#include <stdio.h>
int funcao(char* fita){
    char *auxiliar = fita;
    while(*fita != '\0'){
      if(*fita == '0'){
        *fita = 'X';
        fita++;
        if(*fita == '1'){
          *fita = 'X';
          fita++;
          if(*fita == '2'){
            *fita = 'X';
            fita++;
            if(*fita == '\0'){
              *fita = '\0';
                printf("\n%s\n%s\n", "Cadeia aceita", auxiliar);
                return 1;
            }
          }
        }
      }else{
          printf("\n%s\n%s\n", "Cadeia não aceita", auxiliar);
          return 0;
      }
    }
}

void main(){
  char x[] = "012012";
  funcao(x);
}
