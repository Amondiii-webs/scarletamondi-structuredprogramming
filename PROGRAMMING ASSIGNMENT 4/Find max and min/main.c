#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, max, min, value;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Initialize max and min
    max = INT_MIN;  // Smallest possible integer
    min = INT_MAX;  // Largest possible integer

    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);

        // Update max and min during input
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("\nMaximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    return 0;
}
