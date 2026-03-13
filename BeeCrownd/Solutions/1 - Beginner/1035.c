#include <stdio.h>
     
int main() {
 
 int value1, value2, value3, value4;
 int BeC, DeA, CeD, AeB;
 int soma, par;
 
 scanf("%d", &value1);
 scanf("%d", &value2);
 scanf("%d", &value3);
 scanf("%d", &value4);
 
 BeC = value2 > value3;
 DeA = value4 > value1;
 CeD = value3 + value4;
 AeB = value1 + value2;
 soma = CeD > AeB;
 par = value1 % 2 == 0;
 
if ((value3 > 0) && (value4 > 0) && (par)){
     if(BeC && DeA && soma){
         printf("Valores aceitos\n");
     }else if(!BeC || !DeA || !soma){
         printf("Valores nao aceitos\n");
     }
 }else{
     printf("Valores nao aceitos\n");
 }
 
    return 0;
}