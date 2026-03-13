#include <stdio.h>
#include <math.h>
 
int main() {
    double A, B, C;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    if (A != 0){
        double delta = (B * B) - (4 * A * C);
        if (delta >= 0){
            double raiz = sqrt(delta);
            double R1 = ((-B) + raiz) / (2 * A);
            double R2 = ((-B) - raiz) / (2 * A);
            
            printf("R1 = %.5lf\n", R1);
            printf("R2 = %.5lf\n", R2);
        }else{
        printf("Impossivel calcular\n");
    }
    }else{
        printf("Impossivel calcular\n");
    }
    
 
    return 0;
}