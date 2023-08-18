#include <stdio.h>
// "float" declara numero tipo: 11,5

int main(){// o "int" usa 4 bytes que representa 4 bilhões de numeros
      int numero1;
      int numero2; 
      int resultado;


    numero1 = 34;
    numero2 = 2;

    resultado = numero1 * numero2;
    printf("Resultado: %d\n", resultado);// "%d" representa que é um número inteiro


    return 0;
}