#include <stdio.h>
 
int main(){
 int cha;
 int value1, value2, value3, value4, value5;
 int soma;
 
 scanf("%d", &cha);
 scanf("%d %d %d %d %d", &value1, &value2, &value3, &value4, &value5);
 
 soma = 0;
    if(value1 == cha){
     soma += 1;
  }
    if(value2 == cha){
     soma += 1;
  }
    if (value3 == cha){
     soma += 1;
  }
    if (value4 == cha){
     soma += 1;
  }
    if (value5 == cha){
     soma += 1;
  }
 printf("%d\n", soma);
 
    return 0;
}