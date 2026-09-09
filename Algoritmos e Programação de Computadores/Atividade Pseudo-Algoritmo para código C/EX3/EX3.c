#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

bool ehpar(int val){
    if (val % 2 == 0)
    {
        return true;
    }
    return false;
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n1;

    printf("Escreva um número inteiro para saber se é par ou ímpar: \n");
    scanf("%d", &n1);

    if (ehpar(n1))
    {
        printf("O número %d é par.", n1);
    }
    else
    {
        printf("O número %d não é par.", n1);
    }

    return 0;
}