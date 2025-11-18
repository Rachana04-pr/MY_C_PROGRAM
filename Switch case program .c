#include <stdio.h>

int main() {
    int marks;

    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    if (marks > 75) {
        printf("Distinction\n");
    }
    else if (marks >= 40 && marks <= 75) {
        printf("Pass\n");
    }
    else {
        printf("Fail\n");
    }

    return 0;
}
