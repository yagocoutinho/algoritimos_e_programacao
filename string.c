#include <stdio.h>
#include <string.h>
int main(){
    //primeira forma de iinicializar
    char string1[10] = {'a', 'b', 'c', '/0'};
    //se não usar o \0 pode ser que na memoria exista valores salvos nas outras posições


    // segunda forma de inicializar
    char string2[10] = "def";


    //terceira forma de inicializar, usando for
    /*char string3[10];
    for(int pos = 0; pos < 3;pos==){
        scanf("%c", &string3[pos]);
        scanf("%c", &lixo);
    }
    string3[3] = '\0';*/

    //quarta forma de inicializar, lendo o terminal
    char string3[10];
    printf("insira uma string para ser lida pelo 'gets': ");
    gets(string3);


    // quinta forma de inicializar, lendo fgets
    //permite passar tamanho maximo da entrada
    //evita problemas  com o buffer
    //
    char string4[20];
    fgets(string4, 20, stdin);
    

    //(inicializada passando uma lista de chars)
    printf("string1: %s\n", string1);
    //(inicializada passando uma string literal)
    printf("string2: %s\n", string2);
    //(inicializada com gets)
    printf("string3: %s\n", string3);
    //(inicializada com fgets)
    printf("string4: %s\n", string4);

    printf("imprimindo string4 com fputs:\n");
    //outro forma de imprimir
    fputs(string4, stdout);



    //funções para manipular strings

    //tamanho de uma string
    printf("Tamanho da string 4: %d\n", strlen(string4));

    //copíar uma string para outra
    char string5[30];
    //string5 = string1; --> não é permitido
    strcpy(string5, string1);
    printf("string(inicializada com strcpy): %s\n", string5);


    



    return 0;
}