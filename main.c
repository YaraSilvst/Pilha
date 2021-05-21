#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void){

  printf("Números:\n\n") ;
  empilhar(1);
  empilhar(2);
  empilhar(3);
  empilhar(4);
  exibir();

  printf("\n------\n");

  printf("Desempilhando:\n\n");
  printf("%i\n", desempilhar());
  exibir();

  printf("\n------\n");
  esvaziar();

  exibir();

  return 0;
}