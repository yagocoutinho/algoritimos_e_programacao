#include <stdio.h>

int main(){

    int numTestes, numIdiomas;
    scanf("%d", &numIdiomas);
    char idiomas[numIdiomas][21];

    for(int k = 0; k < numIdiomas;k++){
        scanf("%s", idiomas[k]);
    }

    char primeiroIdioma[21];
    char idiomaFalado[21];

    strcpy(primeiroIdioma, idiomas[0]);
    strcpy(idiomaFalado, primeiroIdioma);

    for(int k = 1; k < numIdiomas;k++){
        if(strcmp(primeiroIdioma, idiomas[k]) !=0){
            strcmp(idiomaFalado, "ingles");
        }
    }

    printf("%s\n", idiomaFalado);


    return 0;
}