#include <stdio.h>

   
   /*int soma(){
    int numero1;
    int numero2;

    printf("insira dois numeros:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    return numero1 + numero2;
 }*/
   
//int a recebe o valor de numero1
//int b recebe o valor de numero2

   int soma(int a, int b){
    return a + b;
   }
   
    int main(){
        char operacao;

        printf("Insira uma operacao:\n");
        scanf("%c", &operacao);


        int numero1, numero2;

        printf("Insira dois numeros:\n");
        scanf("%d", &numero1);
        scanf("%d", &numero2)

        if(operacao == '+'){
            int resultado = soma(numero1, numero2); // pega a copia dos valores do nuemro1 e numero2 e manda pra função
            printf("Resultado: %d\n", resultado);
        }

        printf("terminei os calculos...\n");


        return 0;
    }