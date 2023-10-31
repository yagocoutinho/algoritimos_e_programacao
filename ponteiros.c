#include <stdio.h>
 int main(){
   int c = 5, d = 50;
   int *p, *p1;

   p = &c; //armazena o endereço de memoria de c em p

   printf("valor de c: %d\n", c);
   printf("endereço de memoria de c: %p\n", &c);
   printf("valor de p: %p\n", p);
   printf("valor da variavel c a partir de p: %d\n", *p);
   *p = 10; // c = 10;
   printf("alterando valor de c pelo ponteiro p... \n");
   printf("valor de c: %d\n", c);

   p1 = p; // p1 recbee endereço de memoria salvo em p
   printf("valor de p1: %p\n", p1);
   printf("valor da variavel de c a partir de p1: %d\n", p1);

    p1 = &d;
    *p = *p1;


    return 0;
 }