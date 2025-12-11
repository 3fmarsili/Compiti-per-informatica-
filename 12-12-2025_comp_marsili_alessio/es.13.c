#include <stdio.h>
int main() {
    int a, b, c;
    printf("Inserisci tre numeri: ");
	scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c &&
        a + c > b &&
        b + c > a)
        puts("1");
    else
        puts("0");

    return 0;
}
