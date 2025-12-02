#include <stdio.h>
#include <stdlib.h>
int main () {
float num;
printf( "Inserisci un numero: ");
scanf ("%f" , &num) ;
if (num > 0) {
printf("Il numero e' positivo");
}
else {
printf("Il numero e' negativo");
}
return 0;
}

