#include <stdio.h>
#include <locale.h>

float calcconta(float val){
    if (val <= 100.00) return (val * 0.60);
    if (val <= 200.00) return (val * 0.75);
    return (val * 0.9);
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float cons, total;

    printf("Escreva o consumo, em kWh desse mês: \n");
    scanf("%f", &cons);

    total = calcconta(cons);

    printf("A conta de energia desse mês será de R$%.2f", total);

    return 0;
}