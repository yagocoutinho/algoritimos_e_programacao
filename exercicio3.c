#include <stdio.h>
int main(){

    int senhaCadastrada, senhaDigitada, tentativas = 0;

printf("insira uma senha de 4 digitos: ");
scanf("%d", &senhaCadastrada);

while(1){
    printf("insira novamente: ");
    scanf("%d", &senhaDigitada);

    if (senhaDigitada == senhaCadastrada){
        printf("senhaCadastrada: %04d\n", senhaCadastrada);
        printf("senha valida!\n");
        break;
    }else {
    printf("senha invalida!\n");
    tentativas ++;
    
    if (tentativas >= 3){
      printf("limtite de tentativas excedido!\n");
      break;
          }
    }
}   



    return 0;
}

/*#include <stdio.h>

int main() {
    int senhaCadastrada, senhaDigitada, tentativas = 0;
    
    // Ler a senha inicial
    printf("insira uma senha de 4 digitos: ");
    scanf("%d", &senhaCadastrada);
    
    while (1) {
        // Ler a senha digitada
        printf("insira novamente: ");
        scanf("%d", &senhaDigitada);
        
        // Verificar se a senha é igual à cadastrada
        if (senhaDigitada == senhaCadastrada) {
            printf("senha cadastrada: %04d\n", senhaCadastrada);
            printf("senha valida!\n");
            break;
        } else {
            printf("senha invalida!\n");
            tentativas++;
            
            // Limitar o número de tentativas (opcional)
            if (tentativas >= 3) {
                printf("Limite de tentativas excedido!\n");
                break;
            }
        }
    }

    return 0;
}*/
