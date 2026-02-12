#include <stdio.h>

int main() {
    int a, b, somma;

    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);

    somma = a + b;

    printf("La somma è: %d\n", somma);
    return 0;
}
