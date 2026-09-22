/* Comentario de bloco 
Programa: Hello.c
Data: 2026.09.22
Autor:Wesley Gustavo Dos Santos Rodrigues
*/

// importa a biblioteca padrao de entrada e saida
#include <stdio.h>

// defino a funçao ´principal do tipo int
int main(){
    // printf == saida ---> Mostra na tela
    // "entre aspas == texto" 
    // comando se encerra com ;
    printf("Hello World!\n");

    // Receber 2 valores somar e mostrar o resultado
    int A=0;
    int B=0;
    printf("Digite um valor: ");
    scanf("%d", &A);
    printf("Digite outro Valor: ");
    scanf("%d", &B);
    int soma = A+B;
    printf("Soma: %d\n", soma);
    // Indica que chegou ao fim da funçao == retornando 0
    return 0;
}

/*
para compilar == 
gcc <nome-do-arquivo> -o 
nome-do-programa

para executar ==
./nome-do-programa

%d espera que você passe um inteiro.
*/

