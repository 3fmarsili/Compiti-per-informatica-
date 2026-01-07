#include <stdio.h>

int main() {
    int A, B, i;

    printf("Inserisci A: ");
    scanf("%d", &A);
    printf("Inserisci B: ");
    scanf("%d", &B);

    printf("Numeri pari tra %d e %d:\n", A, B);

    for (i = A; i <= B; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

