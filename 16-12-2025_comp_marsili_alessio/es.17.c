#include <stdio.h>
#include <stdlib.h>

int main() {

    char giornale1[25], giornale2[25], giornale3[25];
    int vendite1, vendite2, vendite3, maxVendite;
    float guadagno;

    printf("Inserisci i nomi dei tre quotidiani e le copie vendute.\n");

    printf("Nome del primo quotidiano: ");
    scanf("%s", giornale1);
    printf("Copie vendute del primo: ");
    scanf("%d", &vendite1);

    printf("Nome del secondo quotidiano: ");
    scanf("%s", giornale2);
    printf("Copie vendute del secondo: ");
    scanf("%d", &vendite2);

    printf("Nome del terzo quotidiano: ");
    scanf("%s", giornale3);
    printf("Copie vendute del terzo: ");
    scanf("%d", &vendite3);

    if (vendite1 > vendite2 && vendite1 > vendite3) {
        maxVendite = vendite1;
    }
    else if (vendite2 > vendite1 && vendite2 > vendite3) {
        maxVendite = vendite2;
    }
    else if (vendite3 > vendite1 && vendite3 > vendite2) {
        maxVendite = vendite3;
    }

    if (maxVendite <= 200) {
        guadagno = 0.10 * maxVendite;
    }
    else if (maxVendite > 200 && maxVendite < 300) {
        guadagno = 0.20 * maxVendite;
    }
    else if (maxVendite > 300) {
        guadagno = 0.30 * maxVendite;
    }

    printf("Il ricavo dell'edicolante e' di %.2f euro.", guadagno);

    return 0;
}
