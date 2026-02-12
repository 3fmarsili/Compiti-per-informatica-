#include <stdio.h>

int main() {
    int giorno, copie;
    int max_copie = 0, giorno_max = 0;
    int somma_feriali = 0, conta_feriali = 0;
    int somma_domeniche = 0, conta_domeniche = 0;

    printf("Inserisci giorno (1-7) e copie vendute (0 per finire):\n");

    while (1) {
        scanf("%d %d", &giorno, &copie);

        if (copie == 0)
            break;

        if (copie > max_copie) {
            max_copie = copie;
            giorno_max = giorno;
        }

        if (giorno >= 1 && giorno <= 5) {
            somma_feriali += copie;
            conta_feriali++;
        }

        if (giorno == 7) {
            somma_domeniche += copie;
            conta_domeniche++;
        }
    }

    if (conta_feriali > 0)
        printf("Media feriali: %.2f\n", (float)somma_feriali / conta_feriali);

    if (conta_domeniche > 0)
        printf("Media domeniche: %.2f\n", (float)somma_domeniche / conta_domeniche);

    printf("Giorno con max vendite: %d con %d copie\n", giorno_max, max_copie);

    return 0;
}

