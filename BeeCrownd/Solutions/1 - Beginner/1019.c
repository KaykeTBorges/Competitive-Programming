#include <stdio.h>

int main(){
    int tempo;
    int hora, minuto, segundo;
    scanf("%d", &tempo);
    if (tempo >= 3600){
        hora = tempo / 3600;
        minuto = (tempo % 3600) / 60;
        segundo = (tempo % 3600) % 60;
        
        printf("%d:%d:%d\n", hora, minuto, segundo);
    }else if (tempo >= 60){
        hora = 0;
        minuto = tempo / 60;
        segundo = tempo % 60;
        
        printf("%d:%d:%d\n", hora, minuto, segundo);
    }else if (tempo < 60){
        hora = 0;
        minuto = 0;
        segundo = tempo;
        
        printf("%d:%d:%d\n", hora, minuto, segundo);
    }
    
    
    
    return 0;
}