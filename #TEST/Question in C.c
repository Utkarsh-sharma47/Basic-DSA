#include <stdio.h>

void passByReference(int *num) {

    *num = *num + 10;  // Modify the value at the address
    printf("Inside passByReference: %d\n", *num);
}

int main() {
    int original = 5;
    printf("Before passByReference: %d\n", original);
    passByReference(&original);  // Pass by reference
    printf("After passByReference: %d\n", original);  // Original is modified
    return 0;
}
