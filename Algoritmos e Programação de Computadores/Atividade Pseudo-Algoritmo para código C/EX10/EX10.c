#include <stdio.h>
#include <locale.h>

const char * situacaoaluno(float media, float freq){
    if (media < 5.0 || freq < 75) return "reprovado";
    if (media < 7.0) return "recuperação";
    return "aprovado";
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float nota1, nota2, nota3, media, freq;

    printf("Escreva a primeira nota do aluno: \n");
    scanf("%f", &nota1);
    printf("Escreva a segunda nota do aluno: \n");
    scanf("%f", &nota2);
    printf("Escreva a terceira nota do aluno: \n");
    scanf("%f", &nota3);
    printf("Escreva o percentual de frequência do aluno (valor deve ser escrito com vírgula.): \n%%");
    scanf("%f", &freq);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A situação atual do aluno é: %s", situacaoaluno(media, freq));

    return 0;
}