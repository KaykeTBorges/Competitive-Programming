#include <stdio.h>
#include <math.h>

long double KiloGramas(int Qquadrados){
    int i;
    long double graos = 1, gramas;
    unsigned long long int kg;
    
    graos = pow(2, Qquadrados);

    kg = graos / 12000;
    return kg;
}
 
int main() {
    int casos;
    int quadrados;
    
    scanf("%d", &casos);
    for(int i = 0; i < casos; i++){
        scanf("%d", &quadrados);
        printf("%.Lf kg\n", KiloGramas(quadrados));
    }
 
    return 0;
}