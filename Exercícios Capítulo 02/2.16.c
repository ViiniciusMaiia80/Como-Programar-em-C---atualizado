/*2.16 Aritmética. Escreva um programa que peça ao usuário que digite dois números,
obtenha esses números e imprima a soma, o produto, a diferença, o quociente e o 
módulo (resto da divisão).*/

#include <stdio.h>

int main(void){
    int a,b;

    
    printf("Digite dois numeros:");
    scanf("%d%d", &a,&b);
    
    printf("A soma de %d + %d = %i\n ", a,b, a+b);
    printf("O produto de %d * %d = %d\n ",a,b, a*b);
    printf("A diferença entre %d - %d = %d\n",a,b,a-b);
    if(b!=0){
        printf("O quociente de %d por %d eh igual a %d\n", a,b,a/b);
        printf("O modulo de %d e %d eh igual a %d", a, b, a%b);
        }else{
        printf("O numero nao pode ser dividido por zero");
    }
    return 0;
}