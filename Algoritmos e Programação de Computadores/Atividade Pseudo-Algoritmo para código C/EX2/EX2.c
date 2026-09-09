#include <stdio.h>
#include <locale.h>

void resultadomedia(float x){
    if (x >= 7.0){
        printf("O aluno foi aprovado com nota %.2f.", x);
        return;
    }
    printf("O aluno foi reprovado com nota %.2f.", x);
    return;
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float nota1, nota2, media;

    printf("Escreva o valor da primeira nota: \n");
    scanf("%f", &nota1);

    printf("Escreva o valor da segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    resultadomedia(media);

    return 0;
}