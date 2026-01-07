#include <stdio.h>

int main() {
    int X, Y, i;
    int somma = 0;

    printf("Inserisci X: ");
    scanf("%d", &X);
    printf("Inserisci Y: ");
    scanf("%d", &Y);

    for (i = 1; i <= X; i++) {
        somma += (Y + i) * (Y + i);
    }

    printf("Somma dei quadrati: %d\n", somma);

    return 0;
}
