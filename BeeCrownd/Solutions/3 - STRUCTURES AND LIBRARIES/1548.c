#include <stdio.h>

#define MAXSIZE 1000

void Troca(int *a, int *b){
    int aux = *a;
	*a = *b;
	*b = aux;
}

int main(){
	int casos, alunos;
    int vetor[MAXSIZE] = {0}, comparativo[MAXSIZE] = {0};
    int i, j, flag, nTrocas;

    scanf("%d", &casos);
    for(i = 0; i < casos; i++){
        scanf("%d", &alunos);

        for(j = 0; j < alunos; j++){
            scanf("%d", &vetor[j]);
            comparativo[j] = vetor[j];
        }

        flag = 1;
        while(flag){
            flag = 0;
            for(j = 0; j < alunos; j++){
                if(vetor[j] < vetor[j + 1]){
                    Troca(&vetor[j], &vetor[j + 1]);
                    flag = 1;
                }
            }
        }

        nTrocas = 0;
        for(j = 0; j < alunos; j++){
            if(vetor[j] == comparativo[j]){
                nTrocas++;
            }
        }
        printf("%d\n", nTrocas);

    }

	return 0;
}