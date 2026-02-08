#include <stdio.h>

int main() {
    int a, b, diff;

    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);

    if (a >= b)
        diff = a - b;
    else
        diff = b - a;

    printf("La differenza è: %d\n", diff);
    return 0;
}
