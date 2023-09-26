#include <stdio.h>
int main(){
   int numero;

    printf("insira um numero: ");
    scanf("%d", &numero);

   if (numero % 2 == 0){
    printf("%d eh par\n", numero);
   } else{
    printf("%d eh impar\n", numero);
   }

   int somaDigitos = 0;
   int tempNumero = numero;

   while (tempNumero > 0) {
    somaDigitos += tempNumero % 10;
    tempNumero /= 10;
   }

    printf("A soma dos algarismos de %d eh igual a %d\n", numero, somaDigitos);




    return 0;
}