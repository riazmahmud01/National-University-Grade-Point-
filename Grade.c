#include <stdio.h>
int main()
{ // Marks Section Input
    int marks;
    printf("Enter Your Exam Marks : ");
    scanf("%d", &marks);

    // Grade Point Add
    if (marks >= 80 && marks < 100)
    {
        printf("A+");
    }
    else if (marks >= 75 && marks < 80)
    {
        printf("A");
    }
    else if (marks >= 65 && marks < 70)
    {
        printf("B+");
    }
}