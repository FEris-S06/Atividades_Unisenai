#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n1, n2, res;

    printf("Escreva o primeiro número inteiro: \n");
    scanf("%d", &n1);

    printf("Escreva o segundo número inteiro: \n");
    scanf("%d", &n2);

    res = n1 + n2;

    printf("O resultado da soma dos dois números inteiros é: %d", res);

    return 0;
}