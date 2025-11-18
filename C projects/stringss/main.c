#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter a string: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    name[strcspn(name, "\n")] = '\0';

    int length = strlen(name);

    printf("You entered: %s\n", name);
    printf("Length of the string: %d\n", length);

    return 0;
}
