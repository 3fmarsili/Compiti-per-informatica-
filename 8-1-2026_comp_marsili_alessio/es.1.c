#include <stdio.h>

#define PI 3.14

int main() {
    int r;
    float circonferenza, area;

    for (r = 1; r <= 20; r++) {
        circonferenza = 2 * PI * r;
        area = PI * r * r;

        printf("Raggio: %d - Circonferenza: %.2f - Area: %.2f\n",
               r, circonferenza, area);
    }

    return 0;
}
