#include <stdio.h>

int main() {
    int n, i, value, pos;

    // Input the size of array
    printf("Input the size of array: ");
    scanf("%d", &n);

    // Declare array with extra space for insertion
    int arr[n + 1];

    // Input elements into the array
    printf("Input %d elements in the array in ascending order:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Input the value to be inserted
    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    // Input the position where value should be inserted
    printf("Input the position, where the value to be inserted: ");
    scanf("%d", &pos);

    // Display the current list
    printf("\nThe current list of the array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Shift elements to the right from the insertion position
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the value at the specified position
    arr[pos] = value;

    // Increment the size
    n++;

    // Display the new list after insertion
    printf("After Insert the element the new list is: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
