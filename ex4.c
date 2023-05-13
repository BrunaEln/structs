#include <stdio.h>
#include <string.h>
#define TAM 10

typedef struct alunos{
    int matricula;
    char nome[30];
    float MFinal;

}ListaAlunos;
main () {
    ListaAlunos lista [TAM];;

    for (int i = 0; i < TAM; i++) {
        printf ("\n\nDigite o seu nome: ");
        scanf ("%30[^\n]s", &lista[i].nome);
        fflush (stdin);
        printf ("Digite a sua matricula: ");
        scanf ("%d", &lista[i].matricula);
        printf ("Digite a sua media final: ");
        scanf ("%f", &lista[i].MFinal);
        fflush (stdin);
    }
    for (int i = 0; i < TAM; i++) {
        if (lista[i].MFinal >= 5) {
            printf ("!!!!APROVADO!!!!");
            printf ("\n\nNome: %s\nMatricula: %d\nMedia: %.2f\n\n", lista[i].nome, lista[i].matricula, lista[i].MFinal);
        }
    }
    for (int i = 0; i < TAM; i++) { 
        if (lista[i].MFinal < 5) {
            printf ("....REPROVADO....");
            printf ("\n\nNome: %s\nMatricula: %d\nMedia: %.2f\n\n", lista[i].nome, lista[i].matricula, lista[i].MFinal);
        }
    }
}