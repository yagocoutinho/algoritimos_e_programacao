#include <stdio.h>

int main(){
    int nota1;
    int nota2;
    int nota3;
    int media;

    printf("Digite 3 notas de alunos:\n");

    
    printf("nota 1: ");
    scanf("%d", &nota1);
    printf("nota 2: ");
    scanf("%d", &nota2);// scanf para ler
    printf("nota 3: ");// printf para mostrar
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3)/3;
    

 
if(media == 8){ // "=="checa se media é igual a 8
    printf("voce ganhou um ponto\n");
    media = media + 1;

}
else if(media == 9){
    printf("mais um ponto\n");
    media = media+1;
}

   printf("media: %d\n", media);
    if(media < 7 ){ // começar pela ordem mais importante ou especifica
        printf("reprovado\n");

    }
    else if(media > 8){
        printf("espetacular\n");
    }else if(media>9){
        printf("tu e o bixao mesmo");
    
    }else {
        printf("aprovado\n");
    }

    return 0;
}