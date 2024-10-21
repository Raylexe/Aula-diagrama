#include <stdio.h>

int main(){
 char estado;
 char s;
 char c;
 char d;
 char v;

 printf("Insira seu estado civil:");
 scanf("%c", & estado);

 if(estado=='s'){
    printf("solteiro");
 }
  
  if(estado=='c'){
    printf("casado");
 }

  if(estado=='d'){
    printf("divorciado");
 }

  if(estado=='v'){
    printf("viuvo");
 }
 }