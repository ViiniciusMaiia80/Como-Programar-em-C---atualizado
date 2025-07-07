/*2.5-Usando as instruções que você escreveu no Exercício 2.4, 
escreva um programa completo que calcule o produto de 
três inteiros.*/

#include <stdio.h>

int main(void){
    int x,y,z, resultado;

    printf("Digite 3 valores inteiros:");
    scanf("%d%d%d", &x, &y, &z);
    
    resultado = x*y*z;

    printf("O produto eh = %d", resultado);
    return 0;
}