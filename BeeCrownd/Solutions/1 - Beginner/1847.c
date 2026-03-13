#include <stdio.h>
 
int main() {
    int dia1, dia2, dia3;
    int diferenca12, diferenca23;
    
    scanf("%d %d %d", &dia1, &dia2, &dia3);
    
    
    if(dia1 > dia2 && dia2 <= dia3){
        printf(":)\n");
    }else if(dia1 < dia2 && dia2 >= dia3){
        printf(":(\n");
    }else if(dia1 < dia2 && dia2 < dia3 && (dia2 - dia1) > (dia3 - dia2)){
        printf(":(\n");
    }else if(dia1 < dia2 && dia2 < dia3 && (dia2 - dia1) <= (dia3 - dia2)){
        printf(":)\n");
    }else if(dia1 > dia2 && dia2 > dia3 && (dia1 - dia2) > (dia2 - dia3)){
        printf(":)\n");
    }else if(dia1 > dia2 && dia2 > dia3 && (dia1 - dia2) <= (dia2 - dia3)){
        printf(":(\n");
    }else if(dia1 == dia2 && dia2 < dia3){
        printf(":)\n");
    }else if(dia1 == dia2 && dia2 > dia3){
        printf(":(\n");
    }
 
    return 0;
}