#include <stdio.h>

int main(){
    int digitosa;
    int digitosb;
    float resultado;
    int soma;


    
 printf("Insira os 2 primeiros digitos do seu ano de nascimento:");
 scanf("%d", &digitosa);
 printf("Insira os 2 ultimos digitos do seu ano de nascimento:");
 scanf("%d", &digitosb);

  soma = digitosa + digitosb;
  printf("Sua soma deu: %d\n", soma);
  
  resultado = soma % 5;
  printf("Seu resto e: %d / 5 = %f\n", soma, resultado);

 if ( resultado == 0){
    printf("Timido\n");
    }
 if ( resultado == 1){
    printf("Sonhador\n");
 }
 if ( resultado == 2){
    printf("Paquerador\n");
 }
 if ( resultado == 3){
    printf("Atraente\n");
 }
 if ( resultado == 4){
    printf("Irresistivel\n");
 }

}