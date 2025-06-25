// Input a string from the user and find its length (without using the string library).


#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string with spaces

    // Manually calculate length (excluding '\0')
    while (str[length] != '\0') {
        if (str[length] == '\n') {
            break;  // Stop at newline (from Enter key)
        }
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
