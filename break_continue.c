#include <stdio.h>

int main() {
    printf("Number filter: Skip multiples of 3, stop at 15\n");
    for (int i = 1; i <= 20; i++) {
        if (i == 15) {
            printf("Breaking at %d!\n", i);
            break;
        }
        if (i % 3 == 0) {
            continue;
        }
        printf("%d ", i);
    }   // End of for loop
    printf("\n");

    return 0;
}

//gcc break_continue.c -o break_continue
//./break_continue