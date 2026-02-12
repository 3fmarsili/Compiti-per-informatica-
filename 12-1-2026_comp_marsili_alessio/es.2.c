#include <stdio.h>

int main() {
    int max, num;
    int i;  
    scanf("%d", &max);
    for(i = 1; i < 4; i++) {
        scanf("%d", &num);
        if(num > max)
            max = num;
    }
    
    printf("Massimo: %d\n", max);
    return 0;
}
