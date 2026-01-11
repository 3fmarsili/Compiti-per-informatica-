#include <stdio.h>

int main() {
    int min, x;
    int n;
    int i;

    printf("Quanti numeri? ");
    scanf("%d", &n);

    printf("Inserisci il primo numero: ");
    scanf("%d", &min);

    for(i = 1; i < n; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &x);

        if(x < min)
            min = x;
    }

    printf("Minimo: %d\n", min);

    return 0;
}
