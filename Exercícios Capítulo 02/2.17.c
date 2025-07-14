/*2.17 Imprimindo valores com printf. Escreva um programa que imprima
 os números de 1 a 4 na mesma linha. Escreva o programa utilizando os métodos a seguir.
 a) Uma instrução printf sem especificadores de conversão.
 b) Uma instrução printf com quatro especificadores de conversão.
 c) Quatro instruções printf.*/

 #include <stdio.h>

 int main(void){
    
    printf("a)1 2 3 4\n");
    printf("b)%d %d %d %d\n", 1, 2, 3, 4);
    printf("c)1 ");
    printf("2 ");
    printf("3 ");
    printf("4");

    return 0;


 }

