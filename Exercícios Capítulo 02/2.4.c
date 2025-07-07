/*2.4 Escreva uma instrução (ou comentário) para realizar 
cada um dos seguintes:*/

//a) Indicar que um programa calculará o produto de três inteiros.
//Produto de três inteiros:
#include <stdio.h>

int main(void){
//b) Declarar as variáveis x, y, z e resultado para que tenham o tipo int.
    int x,y,z,resultado;

//c) Pedir ao usuário que digite três inteiros.
    printf("Digite o valor de 3 inteiros: ");

//d) Ler três inteiros do teclado e armazená-los nas variáveis x, y e z.
    scanf("%d%d%d",&x,&y,&z);

//e) Calcular o produto dos três inteiros contidos nas variáveis x , y e z, e atribuir o resultado à variável resultado.
    resultado = x*y*z;

//f) Exibir “O produto é” seguido pelo valor da variável inteira resultado.
    printf("O produto dos valores eh= %d ", resultado);
return 0;

}

