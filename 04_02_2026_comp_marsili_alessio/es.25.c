#include <stdio.h>

int main() {
    int auto_scelta;
    int totale = 70 + 60 + 80;

    printf("Vai in auto? (1 = si, 0 = no): ");
    scanf("%d", &auto_scelta);

    if (auto_scelta == 1) {
        totale += 20;
    }

    printf("Costo totale del viaggio: %d euro\n", totale);

    return 0;
}
