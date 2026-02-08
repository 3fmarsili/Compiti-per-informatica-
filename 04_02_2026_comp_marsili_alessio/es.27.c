#include <stdio.h>

int main() {
    int num;

    printf("Inserisci numeri positivi (0 per terminare):\n");

    do {
        scanf("%d", &num);

        if (num > 0) {
            int a = 1, b = 1, c;

            while (b < num) {
                c = a + b;
                a = b;
                b = c;
            }

            if (b == num || num == 1)
                printf("%d appartiene alla serie di Fibonacci\n", num);
            else
                printf("%d NON appartiene alla serie di Fibonacci\n", num);
        }

    } while (num != 0);

    return 0;
}
