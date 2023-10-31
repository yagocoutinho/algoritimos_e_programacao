#include <stdio.h>

int main(){
    float notas[4] , pesos[4] = {2,3,4,1}, soma =0;

    for(int i=0; i<4;i++){
        scanf("%f", &notas[i]);
    }

    for(int i = 0;i < 4;i++){
        soma += notas[i]*pesos[i];
    }

    float mediaInicial = soma/10;

    printf("Media: %.1f\n", mediaInicial);

    if(mediaInicial < 5){
        printf("Aluno Reprovado.\n");
    } else if(mediaInicial >= 7){
        printf("Aluno Aprovado.\n");
    } else{
        printf("Aluno em exame.\n");
        float notaExame;
        scanf("%f", &notaExame);
        printf("Nota do exame:%.1f\n", notaExame);

        float mediaFinal = (notaExame + mediaInicial)/2;

        if(mediaFinal >=5){
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno Reprovado.\n");
        }

        printf("Media final: %.1f\n", mediaFinal);
    }

    return 0;
}