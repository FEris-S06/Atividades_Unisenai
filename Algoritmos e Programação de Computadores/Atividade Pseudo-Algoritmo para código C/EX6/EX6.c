#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

bool eheficiente(float val){
    if (val >= 12) return true;
    return false;
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float dist, cons, cons_med;

    printf("Escreva a quantidade de quilômetros rodados: \n");
    scanf("%f", &dist);
    
    printf("Escreva a quantidade de gasolina consumida, em litros: \n");
    scanf("%f", &cons);

    cons_med = dist / cons;

    if(eheficiente(cons_med))
    {
        printf("O veículo é eficiente. Possuindo um consumo médio de %.2fKm/l.", cons_med);
    }
    else
    {
        printf("O veículo é ineficiente. Possuindo um consumo médio de %.2fKm/l.", cons_med);
    }

    return 0;
}