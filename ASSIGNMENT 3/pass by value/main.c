
#include <stdio.h>

void passByValue(int x) {
    x = x + 1;
}

void passByReference(int *x) {
    *x = *x + 1;
}

int main() {
    int num = 10;

    passByValue(num);
    printf("After pass by value: %d\n", num);

    passByReference(&num);
    printf("After pass by reference: %d\n", num);

    return 0;
}
