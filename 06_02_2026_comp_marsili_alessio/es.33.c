#include <stdio.h>

int main() {
    int N, M;
    int abitanti, totale = 0;

    printf("Numero regioni: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("Numero province della regione %d: ", i);
        scanf("%d", &M);

        for (int j = 1; j <= M; j++) {
            printf("Abitanti provincia %d: ", j);
            scanf("%d", &abitanti);
            totale += abitanti;
        }
    }

    printf("Totale abitanti: %d\n", totale);

    return 0;
}
