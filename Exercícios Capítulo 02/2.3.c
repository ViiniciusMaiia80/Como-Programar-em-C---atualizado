//2.3- Escreva uma única instrução C para executar cada uma das seguintes alternativas:
//a) Declarar as variáveis c, estaVariável, q76354 e número para que tenham o tipo int.
#include <stdio.h>

int main(void){
    int c, estaVariavel, q76354, numero; //variaveis não utilizadas,erro de compilação em tempo de execução

//b) Pedir que o usuário digite um inteiro. Terminar a mensagem com um sinal de dois pontos (:)
//seguido por um espaço, e deixar o cursor posicionado após o espaço.
    int a;
    printf("Digite um numero inteiro: ");

//c) Ler um inteiro do teclado e armazenar o valor digitado na variável inteira a.
    scanf("%d", &a);
    
//d) Se o número não for igual a 7, exibir “A variável número não é igual a 7”.
    if(a!=7){
        printf("A variavel nao eh igual a 7 \n");
    }   

//e) Imprimir a mensagem “Este é um programa em C.” em uma linha.
    printf("Este eh um programa em C");

//f)Imprimir a mensagem “Este é um programa em C.” em duas linhas, de modo que a primeira linha termine em C.
    printf("\nEste eh um programa em C.\nEste eh um programa em C.\n");

//g) Imprimir a mensagem “Este é um programa em C.” com cada palavra em uma linha separada.
    printf("Este\neh\num\nprograma\nem\nC.\n");

//h) Imprimir a mensagem “Este é um programa em C.” com as palavras separadas por tabulações.
    printf("Este\teh\tum\tprograma\tem\tC.");
    return 0;
}
