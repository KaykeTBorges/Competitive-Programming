#include <stdio.h>
 
int main() {
 double salary, sales;
 char name[10];
 double comissao;
 comissao = 0;
 
 scanf("%s", name);
 scanf("%lf", &salary);
 scanf("%lf", &sales);
 comissao = salary + (sales * 0.15);
 
 printf("TOTAL = R$ %.2lf\n", comissao);
 
    return 0;
}