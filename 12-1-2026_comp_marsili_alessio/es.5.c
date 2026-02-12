#include <stdio.h>

int main() {
    int a, b;
    int maxA, maxB;
    float media, maxMedia = -1;

    printf("Inserisci coppie di numeri (0 0 per terminare)\n");

    while(1) {
        scanf("%d %d", &a, &b);

        if(a == 0 && b == 0)
            break;

        media = (a + b) / 2.0;

        if(media > maxMedia) {
            maxMedia = media;
            maxA = a;
            maxB = b;
        }
    }

    printf("Coppia con media maggiore: %d %d\n", maxA, maxB);
    return 0;
}
