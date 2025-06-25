// Check whether a string is palindrome or not.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];        // To store the input string
    int length, i;        // length: length of string, i: loop variable
    int isPalindrome = 1; // Flag, assume true initially

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string with spaces

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Calculate string length manually (or you can use strlen)
    length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome by comparing characters from front and back
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;  // If mismatch found, not palindrome
            break;             // No need to check further
        }
    }

    // Output result
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}
