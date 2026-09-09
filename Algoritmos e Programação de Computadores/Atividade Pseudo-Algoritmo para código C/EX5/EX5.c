#include <stdio.h>
#include <locale.h>

float calcajuste(float val){
    if (val < 2500.00) return (val * 0.10);
    return (val * 0.05);
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float salario, reajuste, final;

    printf("Escreva o valor atual do salário para reajuste: \n");
    scanf("%f", &salario);

    reajuste = calcajuste(salario);

    final = salario + reajuste;

    printf(
        "Salário antigo: R$%.2f\n"
        "Reajuste salarial: R$%.2f\n"
        "Valor do salário após reajuste: R$%.2f",
        salario, reajuste, final
    );

    return 0;
}