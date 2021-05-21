#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define TamanhoPilha 4

int pilha[TamanhoPilha], TopoPosicao = 0;

void empilhar(int valor){

  if(cheia()){
    printf("Pilha cheia!");
  }

  else{
    pilha[TopoPosicao] = valor;
    TopoPosicao++;
  }

}

int desempilhar(){

  if(vazia()){
    printf("Pilha vazia!");
  }

  else{
    TopoPosicao--;
    return pilha[TopoPosicao];
  }

  return 0;

}

void exibir(){

  if(vazia()){
    printf("Pilha vazia!");
  }

  else{
    for(int cont = 0; cont < TopoPosicao; cont++){
      printf("%i\n", pilha[cont]);
    }
  }

}

int vazia(){

  // 1 se estiver vazia e 0 se estiver cheia.

  if(TopoPosicao == 0){
    return 1;
  }

  else{
    return 0;
  }

}

int cheia(){

  // 1 se estiver cheia e 0 se estiver vazia.

  if(TopoPosicao == TamanhoPilha){
    return 1;
  }

  else{
    return 0;
  }

}

void esvaziar(){

  // Enquanto a pilha for diferente de vazia.

  while(!vazia()){
    desempilhar();
  }

}