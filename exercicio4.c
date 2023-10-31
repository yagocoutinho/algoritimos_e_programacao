#include <stdio.h>

int main() {
    char nivel;
    double salario;


    
    scanf(" %c", &nivel);  
    scanf("%lf", &salario);



    double aumento = 0.0;



    switch (nivel) {
        case 'a':
            aumento = salario * 0.05;
            break;
        case 'b':
            aumento = salario * 0.07;
            break;
        case 'c':
            aumento = salario * 0.08;
            break;
        default:
            printf("Nível de experiencia invalido.\n");
            return 1; 
    }

    double salarioAtualizado = salario + aumento;

    printf("R$ %.2lf\n", salarioAtualizado);

    return 0;
}
