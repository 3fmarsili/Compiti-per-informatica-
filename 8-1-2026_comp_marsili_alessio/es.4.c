#include <stdio.h>

int main() {
    int numero, count = 0;
    int limite;

    printf("Inserisci il numero massimo di tentativi: ");
    scanf("%d", &limite);

    while (count < limite) {
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
        count++;

        if (numero % 7 == 0) {
            printf("Successo! Numeri inseriti: %d\n", count);
            return 0;
        }
    }

    printf("Fallimento: nessun numero divisibile per 7\n");
    return 0;
}
