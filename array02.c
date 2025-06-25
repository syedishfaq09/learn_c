  //  Input an integer array from the user and display the same. 

  
#include <stdio.h>
int main() {
    int arr[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);  // User inputs how many integers they want to store
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each integer into the array
    }

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Display each element
    }
    return 0;
}
