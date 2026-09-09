#include <stdio.h>
#include <locale.h>

float calcdesc(float val){
    if (val >= 300.00) return val * 0.12;
    return val * 0.05;
}

int main(){
    setlocale(LC_ALL, "pt_BR.UFT-8");

    float val_compra, desconto, final;

    printf("Escreva o valor da compra: \n");
    scanf("%f", &val_compra);

    desconto = calcdesc(val_compra);

    final = val_compra - desconto;

    printf("Valor final, com desconto aplicado: R$%.2f", final);

    return 0;
}