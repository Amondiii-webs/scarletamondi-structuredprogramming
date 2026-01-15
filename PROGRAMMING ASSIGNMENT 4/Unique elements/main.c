#include <stdio.h>

int main() {
    int n, i, j, count, isAlreadyPrinted;

    printf("Print all unique elements of an array:\n");
    printf("--------------------------------------------\n");

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe unique elements found in the array are: ");
    for(i = 0; i < n; i++) {
        count = 0;
        isAlreadyPrinted = 0;

        // Check if this element was already printed
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isAlreadyPrinted = 1;
                break;
            }
        }

        // Skip if already printed
        if(isAlreadyPrinted) {
            continue;
        }

        // Count occurrences
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        // Print if unique
        if(count == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
