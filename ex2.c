#include <stdio.h>
#include <string.h>
#define TAM 5

typedef struct aluno {
    char nome [30];
    int matricula;
    char curso [40];
}ListaAlunos;

main () {
    ListaAlunos lista[TAM];

    for (int i=0; i < TAM; i++) {
        printf ("Digite seu nome: ");
        scanf ("%30[^\n]s", &lista[i].nome);
        printf ("Digite a matricula: ");
        scanf ("%d", &lista[i].matricula);
        fflush (stdin);
        printf ("Agora informe o seu curso: ");
        scanf ("%40[^\n]s", &lista[i].curso);
        fflush (stdin);
        system ("cls");
    }
    for (int i=0; i < TAM; i++) {
        printf ("Nome: %s\nMatricula: %d\nCurso: %s\n", lista[i].nome, lista[i].matricula, lista[i].curso);
    }
}