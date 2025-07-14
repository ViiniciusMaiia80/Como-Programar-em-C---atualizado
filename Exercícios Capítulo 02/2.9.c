/*2.6-Escreva uma única instrução em C, ou linha única, que 
cumpra os comentários a seguir:
 a) Exiba a mensagem ‘Digite dois números.’
 b) Atribua o produto das variáveis b e c à variável a.

 c) Indique um programa que realize um cálculo de fo
lha de pagamento (ou seja, use um texto que ajude 
a documentar um programa).
 d) Informe três valores inteiros usando o teclado e co
loque esses valores nas variáveis inteiras a, b e c.*/
#include <stdio.h> 
int main(void){int a,b,c;   printf("Digite 2 valores inteiros: "); scanf("%d%d", &b, &c); a=b*c;/*O programa calcula a folha de pagamento*/printf("o valor de  a= %d, b= %d, c=%d ", a, b, c);return 0;}