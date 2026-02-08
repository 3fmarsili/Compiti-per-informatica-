#include <stdio.h>

int main() {
    int n1, n2;

    do {
        printf("Inserisci due numeri: ");
        scanf("%d %d", &n1, &n2);

        if (n1 > n2)
            printf("Il primo numero è maggiore.\n");
        else if (n2 > n1)
            printf("Il secondo numero è maggiore.\n");

    } while (n1 != n2);

    printf("I due numeri sono uguali. Fine programma.\n");
    return 0;
}

