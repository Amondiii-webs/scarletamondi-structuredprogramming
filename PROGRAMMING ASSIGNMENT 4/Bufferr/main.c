#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0;     // Next position to insert
int count = 0;    // Number of elements stored

// Function to insert a new sample
void insertSample(int value)
{
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;

    if (count < BUFFER_SIZE)
        count++;
}

// Function to print samples from oldest to newest
void printBuffer()
{
    int start;

    // If buffer is full, oldest is at head
    if (count == BUFFER_SIZE)
        start = head;
    else
        start = 0;

    printf("Buffer contents (oldest -> newest): ");

    for (int i = 0; i < count; i++)
    {
        int index = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}

int main()
{
    int value;
    char choice;

    do
    {
        printf("Enter sensor value: ");
        scanf("%d", &value);

        insertSample(value);

        printBuffer();

        printf("Add another value? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
