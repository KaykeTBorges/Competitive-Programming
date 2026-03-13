#include <stdio.h>
 
int main() {
 float valor;
 int intervalo1, intervalo2, intervalo3, intervalo4;
 
 scanf("%f", &valor);
 
 intervalo1 = (valor >= 0) && (valor <= 25);
 intervalo2 = (valor > 25) && (valor <= 50);
 intervalo3 = (valor > 50) && (valor <= 75);
 intervalo4 = (valor > 75) && (valor <= 100);

 if(intervalo1){
     printf("Intervalo [0,25]\n");
 }else if(intervalo2){
     printf("Intervalo (25,50]\n");
 }else if(intervalo3){
     printf("Intervalo (50,75]\n");
 }else if (intervalo4){
     printf("Intervalo (75,100]\n");
 }else if(!intervalo1 && !intervalo2 && !intervalo3 && !intervalo4){
     printf("Fora de intervalo\n");
 }
 
    return 0;
}