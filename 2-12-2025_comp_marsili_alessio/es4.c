#include <stdio.h>
#include <stdlib.h>

int main () {

float ore, min, sec;
int scelta;
printf("Inserisci il numero di ore: ");
scanf ("%f" , &ore);
printf("Scegli la conversione: \n");
printf("PREMI 1 - Per convertire in minuti\n");
printf("PREMI 2 - Per convertire in secondi\n");
printf("Scelta: ");
scanf ("%d", &scelta);
switch (scelta) {
case 1:
min = ore * 60;
printf("%.f ore sono %2.f minuti\n"
, ore, min);
break;
case 2:
sec = ore * 3600;
printf("%.f ore sono %2.f secondi\n" , ore, sec);
break;
default:
printf("Scelta non valida\n") ;
}
return 0;
}
