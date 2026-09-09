#include <stdio.h>
#include <locale.h>

const char * classidade(int val){
    if (val < 12) return "criaça";
    if (val < 18) return "adolescente";
    if (val < 59) return "adulto";
    return "idoso";
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int idade;

    printf("Escreva a sua idade: \n");
    scanf("%d", &idade);

    printf("Baseado na sua idade, você se classifica como %s.", classidade(idade));

    return 0;
}