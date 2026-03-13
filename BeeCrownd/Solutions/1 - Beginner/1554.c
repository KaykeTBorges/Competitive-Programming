#include <stdio.h>
#include <math.h>

int main(){
    int casos, Qbolas, brancaX, brancaY, bola, posicaoX, posicaoY, i;
    float distancia, menorDist;

    scanf("%d", &casos);
    while(casos--){
        scanf("%d", Qbolas);
        //Bola branca.
        scanf("%d %d", &brancaX, &brancaY);

        //Inicia a variável de menor distância com um valor altíssimo para que este seja substituído na primeira iteração
        menorDist = 100000.0;
        
        //Lê as coordenadas das N bolas.
        for(i = 0; i < Qbolas; i++){
            scanf("%d %d", &posicaoX, &posicaoY);

            //Calcula a distância entre as bolas
            //Através de Pitágoras, POW(valor, elevado a 2)
            distancia = sqrt(pow((posicaoX - brancaX), 2) + pow((posicaoY - brancaY), 2));

            //Caso a distancia seja menor que a menor distância já armazenada, substitui.
            if(distancia < menorDist){
                menorDist = distancia;
                //Numeração da menor bola.
                bola = i+1;
            }
        }
        printf("%d\n", bola);
    }

    return 0;
}