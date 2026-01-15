#include <stdio.h>

int main() {
    int n, i;

    // Input the number of elements
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Input %d number of elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Display the values stored in the array
    printf("\nThe values store into the array are : ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Display the values in reverse order
    printf("\nThe values store into the array in reverse are : ");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
