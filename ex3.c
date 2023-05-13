#include <stdio.h>
#include <string.h>
#define TAM 5

typedef struct alunos{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3;

}ListaAlunos;
main () {

    ListaAlunos lista [TAM];
    float maiorNota1 = 0, maiorMedia = 0, menorMedia, MGeral;

    for (int i=0; i < TAM; i++) {
        printf ("\n\nDigite o seu nome: ");
        scanf ("%30[^\n]s", &lista[i].nome);
        printf ("Digite a sua matricula: ");
        scanf ("%d", &lista[i].matricula);
        printf ("Digite a sua primeira nota: ");
        scanf ("%f", &lista[i].nota1); 
        printf ("Digite a sua segunda nota: ");
        scanf ("%f", &lista[i].nota2); 
        printf ("Digite a sua terceira nota: ");
        scanf ("%f", &lista[i].nota3);
        fflush (stdin);
        MGeral= (lista[i].nota1 + lista[i].nota2 + lista[i].nota3)/3;

            if (MGeral >= 7) {
                printf ("\nMedia: %.2f. Voce foi aprovado!", MGeral);
            } else {
                printf ("\nMedia: %.2f. Voce foi reprovado.", MGeral);
            }

            if (lista[i].nota1 > maiorNota1) {
                maiorNota1 = lista[i].nota1;
            }
            if (MGeral > maiorMedia) {
                maiorMedia = MGeral;
            }
            if (MGeral < menorMedia) {
                menorMedia = MGeral;
            }
    }
    printf ("\nMaior nota: %.2f\nMaior media geral: %.2f\nMenor media geral: %.2f\n", maiorNota1, maiorMedia, menorMedia);
}