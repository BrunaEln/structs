#include <stdio.h>
#include <string.h>

typedef struct Pessoal{
    char nome [30];
    int idade;
    char endereco [50];
}ListaInfo;

main () {
    ListaInfo pessoa1;

    printf ("Digite o seu nome: ");
    scanf ("%30[^\n]s", &pessoa1.nome);
    printf ("Digite a sua idade: ");
    scanf ("%d", &pessoa1.idade);
    fflush (stdin);
    printf ("Agora digite o seu endereco: ");
    scanf ("%50[^\n]s", &pessoa1.endereco);
    system ("cls");

    printf ("Nome: %s\nIdade: %d anos\nEndereco: %s\n", pessoa1.nome, pessoa1.idade, pessoa1.endereco);
}