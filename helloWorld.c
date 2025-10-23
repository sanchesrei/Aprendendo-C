#include <stdio.h>

int main () {
    int idade, matricula;
    float altura;
    char nome[30];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);   

    printf("digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("Olá, %s!\n", nome); 
    printf("Sua idade é %d anos.\n", idade);
    printf("Sua altura é %.2f metros.\n", altura);  
    printf("Sua matrícula é %d.\n", matricula);  


    return 0;
}