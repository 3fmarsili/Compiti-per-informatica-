#include <stdio.h>

int main() {
    float limite, t1, t2, t3, media;

    printf("Inserisci il limite di accensione: ");
    scanf("%f", &limite);

    printf("Inserisci la prima temperatura: ");
    scanf("%f", &t1);

    printf("Inserisci la seconda temperatura: ");
    scanf("%f", &t2);

    printf("Inserisci la terza temperatura: ");
    scanf("%f", &t3);

    media = (t1 + t2 + t3) / 3.0;

    if (media < limite) {
        printf("Il riscaldamento DEVE accendersi.\n");
    } else {
        printf("Il riscaldamento NON deve accendersi.\n");
    }

    return 0;
}
