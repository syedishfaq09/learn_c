// Display contents of a character array. 


#include <stdio.h>

int main() {
    char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};  // Character array with null terminator
       //OR
//char arr[] = "Hello";
  printf("Character array content: %s\n", arr);

    return 0;
}
