#include <stdio.h>

int main(){
 char comando;

 printf("Insira seu o comando desejado:");
 scanf("%c", & comando);

 if(comando=='1'){
    printf("saldo");
 }
  
  if(comando=='2'){
    printf("extrato");
 }

  if(comando=='3'){
    printf("saque");
 }

  if(comando=='4'){
    printf("sair");
 }
 }