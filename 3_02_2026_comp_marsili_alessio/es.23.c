#include <stdio.h>

int main() {
    int X, Y;
    double risultato = 1;

    printf("Inserisci base (X) ed esponente (Y): ");
    scanf("%d %d", &X, &Y);

    if (Y > 0) {
        for (int i = 0; i < Y; i++) {
            risultato = risultato * X;
        }
    }
    else if (Y < 0) {
        for (int i = 0; i < -Y; i++) {
            risultato = risultato * X;
        }
        risultato = 1 / risultato;
    }
    else {  // Y == 0
        risultato = 1;
    }

    printf("%d elevato a %d = %lf\n", X, Y, risultato);

    return 0;
}
