/*2.18 Comparando inteiros. Escreva um programa que peça ao usuário que digite dois inteiros,
obtenha os números e depois imprima o maior número seguido das palavras ‘é maior’. 
Se os números forem iguais, imprima a mensagem “Esses números são iguais”. Use apenas a 
forma de seleção única da instrução if que você aprendeu neste capítulo.*/

#include <stdio.h>

int main(void){

    int a,b;

    printf("Digite dois numeros: ");
    scanf("%d%d",&a,&b);

    if(a>b){
        printf("%d eh maior que %d", a, b);
    }else if(a<b){
        printf("%d eh menor que %d", a, b);
    }else{
        printf("%d eh igual a %d", a, b);
    }

    return 0;
}