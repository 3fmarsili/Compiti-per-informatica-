#include <stdio.h>

int main() {
    float a, b, c;
    float delta;
    float x1, x2;
    float radice;  

    printf("Inserisci a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Equazione non di secondo grado\n");
    }
    else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Equazione non ha radici reali\n");
        }
        else if (delta == 0) {
            x1 = (-b) / (2 * a);
            printf("Una sola radice: %f\n", x1);
        }
        else {
       
            radice = delta / 2;
            for (int i = 0; i < 20; i++) {
                radice = (radice + delta / radice) / 2;   
            }

            x1 = (-b + radice) / (2 * a);
            x2 = (-b - radice) / (2 * a);

            printf("Due radici:\n");
            printf("x1 = %f\n", x1);
            printf("x2 = %f\n", x2);
        }
    }

    return 0;
}
