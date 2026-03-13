#include <stdio.h>
#include <math.h>
 
int main() {
    double fibo;
    double raiz;
    
    double var1, var2, total;
    int vezes;
    
    raiz = sqrt(5);
    var1 = (1 + raiz) / 2;
    var2 = (1 - raiz) / 2;

    scanf("%d", &vezes);

    total = (pow(var1, vezes) - pow(var2, vezes));

    fibo = total / raiz;
    printf("%.1lf\n", fibo);
 
    return 0;
}