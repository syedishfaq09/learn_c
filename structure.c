// find topper of the class

#include <stdio.h>

// Define structure to hold student details
struct Student {
    int rollNo;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].rollNo);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Find the topper
    int topperIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Display topper details
    printf("\nTopper of the class:\n");
    printf("Roll No: %d\n", students[topperIndex].rollNo);
    printf("Marks: %d\n", students[topperIndex].marks);

    return 0;
}