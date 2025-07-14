/*2.19 Aritmética, maior e menor valor. Escreva um programa que leia três inteiros diferentes
do teclado, depois apresente a soma, a média, o produto, o menor e o maior desses números. 
Use apenas a forma de seleção única da instrução if que você aprendeu neste capítulo. O diálogo 
na tela deverá aparecer da seguinte forma:

 Digite três inteiros diferentes: 13 27 14
 A soma é 54
 A média é 18
 O produto é 4914
 O menor é 13
 O maior é 27*/

 #include <stdio.h>

 int main(void){

    int a,b,c;

    printf("Digite 3 numero inteiros diferentes: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("A soma eh %d\n", a+b+c);
    printf("A media eh %d\n", (a+b+c)/3);
    printf("O produto eh %d\n", a*b*c);
    if(a<b && a<c){
        printf("O menor eh %d\n", a);
    }else if(b<a && b<c){
        printf("O menor eh %d\n", b);
    }else{
        printf(" O menor eh %d\n", c);
    }
    if(a>b && a>c){
        printf("O maior eh %d\n", a);
    }else if(b>c && b>a){
        printf("O maior eh %d\n", b);
    }else{
        printf("O maior eh %d\n", c);
    }
    return 0;
 }