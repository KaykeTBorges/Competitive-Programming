#include <stdio.h>
 
int main() {
 int credito1, credito2, credito3;
 int soma1, soma2, soma3;
 int igual1, igual2, igual3;
 
 scanf("%d %d %d", &credito1, &credito2, &credito3);
 
 soma1 = credito1 == credito2 + credito3;
 soma2 = credito2 == credito1 + credito3;
 soma3 = credito3 == credito1 + credito2;
 igual1 = credito1 == credito2;
 igual2 = credito1 == credito3;
 igual3 = credito2 == credito3;


 if(soma1 || soma2 || soma3 || igual1 || igual2 || igual3){
     printf("S\n");
 }else{
     printf("N\n");
 }
 
    return 0;
}