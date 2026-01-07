#include <stdio.h>

int main() {
    int N, i;

    printf("Inserisci N: ");
    scanf("%d", &N);

    printf("Numeri pari:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", i * 2);
    }

    printf("\nNumeri dispari:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", i * 2 + 1);
    }

    return 0;
}
