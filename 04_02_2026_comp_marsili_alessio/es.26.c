#include <stdio.h>

int main() {
    int N, somma = 0;
    int dispari = 1;

    printf("Inserisci un numero N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        somma += dispari;
        dispari += 2;
    }

    printf("Il quadrato di %d è: %d\n", N, somma);

    return 0;
}

