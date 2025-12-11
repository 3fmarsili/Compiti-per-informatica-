#include <stdio.h>

int main() {
    char classe[20];
    int n, i;
    char cognome[20];
    char esito[20];
    int haRimandati = 0;

    printf("Nome classe: ");
    scanf("%19s", classe);

    printf("Numero allievi: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Cognome allievo %d: ", i + 1);
        scanf("%19s", cognome);

        printf("Esito (PROMOSSO/RIMANDATO/BOCCIATO): ");
        scanf("%19s", esito);

        if (esito[0] == 'R' || esito[0] == 'r') {
            haRimandati = 1;
        }
    }

    printf("RISULTATI\n");
    printf("Totale allievi: %d\n", n);

    if (haRimandati)
        printf("La classe %s ha almeno un allievo rimandato.\n", classe);
    else
        printf("La classe %s NON ha allievi rimandati.\n", classe);

    if (n < 20)
        printf("La classe %s ha meno di 20 allievi.\n", classe);
    else
        printf("La classe %s ha 20 allievi o piu'.\n", classe);

    return 0;
}
