#include <stdio.h>
#include <stdlib.h>

int main() {

    int valoreA, valoreB, risultatoCorretto, rispostaUtente;

    printf("GIOCO: INDOVINA LA SOMMA\n");

    printf("Inserisci il primo valore: ");
    scanf("%d", &valoreA);

    printf("Inserisci il secondo valore: ");
    scanf("%d", &valoreB);

    risultatoCorretto = valoreA + valoreB;

    printf("Scrivi il risultato della somma: ");
    scanf("%d", &rispostaUtente);

    if (rispostaUtente == risultatoCorretto) {
        printf("Risultato corretto: %d. Ottimo, al primo colpo!", risultatoCorretto);
    }
    else {
        printf("Risposta errata, riprova: ");
        scanf("%d", &rispostaUtente);

        if (rispostaUtente == risultatoCorretto) {
            printf("Risultato corretto: %d. Indovinato al secondo tentativo!", risultatoCorretto);
        }
        else {
            printf("Devi ripassare un po' di matematica!");
        }
    }

    return 0;
}
