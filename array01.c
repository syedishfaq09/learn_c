 // Display contents of an integer array. 

 
#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Declare and initialize an integer array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print each element
    }
    return 0;
}
