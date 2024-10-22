#include <stdio.h>
#include <math.h>

int main(){
 int a;
 int b;
 char caractere;

 printf("Qual operacao deseja executar?");
 scanf("%c", &caractere);
 
 printf("Insira o primeiro numero da conta:");
 scanf("%d", &a);

 printf("Insira o segundo numero da conta:");
 scanf("%d", &b);

 

 if(caractere=='+'){
   int calculo1=a+b;
    printf("%d", calculo1);
 }
if(caractere=='-'){
   int calculo2=a-b;
    printf("%d", calculo2);
 }
  if(caractere=='*'){
   int calculo3=a*b;
    printf("%d", calculo3);
 }
  if(caractere=='/'){
   int calculo4=a/b;
    printf("%d", calculo4);
 }
 }