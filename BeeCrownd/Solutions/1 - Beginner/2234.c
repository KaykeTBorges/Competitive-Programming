#include <stdio.h>
 
int main() {
 float quentes, participantes;
 float media;

 scanf("%f", &quentes);
 scanf("%f", &participantes);
 
 media = quentes / participantes;
 
 printf("%.2f\n", media);
 
    return 0;
}