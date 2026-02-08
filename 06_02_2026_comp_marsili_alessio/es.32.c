#include <stdio.h>

int main() {
    int precedente, corrente;
    int diff, nuova_diff;
    int count = 2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &precedente);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &corrente);

    diff = corrente - precedente;
    precedente = corrente;

    while (1) {
        printf("Inserisci un numero: ");
        scanf("%d", &corrente);

        nuova_diff = corrente - precedente;

        if (nuova_diff != diff)
            break;

        precedente = corrente;
        count++;
    }

    printf("Termini validi letti: %d\n", count);

    return 0;
}
