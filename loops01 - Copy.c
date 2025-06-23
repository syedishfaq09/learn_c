  // Display the series (using loops): 1 2 3 4 5 .... n 



#include<stdio.h>
int main() {
    int n, i;
    printf("Enter n:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ",i);
    }
return 0;
}
  

//Display the series (using loops): n n-1 n-2 …. 3 2 1 


#include <stdio.h>
int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    return 0;
}



   // Display all even numbers from 1 to 100 [using loop and if]



#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
