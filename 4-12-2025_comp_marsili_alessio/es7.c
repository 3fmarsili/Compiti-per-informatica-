#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    if (numero <= -5 || numero >= 10) {
        printf("Il dato e' fuori dall'intervallo.\n");
    } else {
        printf("OK.\n");
    }

    return 0;
}

