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
}