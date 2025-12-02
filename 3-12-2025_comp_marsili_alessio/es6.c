#include <stdio.h>
#include <ctype.h> // per isalpha()

int main() {
    char c;

    printf("Inserisci un carattere: ");
    scanf(" %c", &c);

    if (!isalpha(c)) { 
        printf("Errato\n");
    }
    else if (c == 'S' || c == 's') {
        printf("SI\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
