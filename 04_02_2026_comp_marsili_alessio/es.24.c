#include <stdio.h>

int main() {
    int iscritti, votanti, nulle, bianche;
    float perc_votanti, perc_bianche, perc_nulle;

    printf("Numero iscritti: ");
    scanf("%d", &iscritti);

    printf("Numero votanti: ");
    scanf("%d", &votanti);

    printf("Schede nulle: ");
    scanf("%d", &nulle);

    printf("Schede bianche: ");
    scanf("%d", &bianche);

    perc_votanti = (float)votanti / iscritti * 100;
    perc_bianche = (float)bianche / votanti * 100;
    perc_nulle = (float)nulle / votanti * 100;

    printf("Percentuale votanti: %.2f%%\n", perc_votanti);
    printf("Percentuale schede bianche: %.2f%%\n", perc_bianche);
    printf("Percentuale schede nulle: %.2f%%\n", perc_nulle);

    return 0;
}
