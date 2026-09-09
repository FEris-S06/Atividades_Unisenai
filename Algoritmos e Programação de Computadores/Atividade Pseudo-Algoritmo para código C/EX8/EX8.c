#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float n1, n2, n3, maior;

    printf("Escreva 3 números para saber qual é o maior. \n");

    printf("Número 1:\n");
    scanf("%f", &n1);

    printf("Número 2:\n");
    scanf("%f", &n2);
    
    printf("Número 3:\n");
    scanf("%f", &n3);

    maior = n1;
    if (maior < n2) maior = n2;
    if (maior < n3) maior = n3;

    printf("O maior número escrito foi: %f", maior);

    return 0;
}