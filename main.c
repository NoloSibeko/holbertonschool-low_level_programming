#include <stdio.h>

void reset_to_98(int *n) { *n = 98; }

int main(void) {
    int x = 123;
    printf("Before reset: %d\n", x);
    reset_to_98(&x);
    printf("After reset: %d\n", x);
    return 0;
}
