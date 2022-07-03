#include <stdio.h>
int main()
{ // Marks Section Input
    float marks;
    printf("Enter Your Exam Marks : ");
    scanf("%f", &marks);

    // Grade Point Add
    if (marks >= 80 && marks <= 100)
    {
        printf("A+");
    }
    else if (marks >= 75 && marks < 80)
    {
        printf("A");
    }
    else if (marks >= 70 && marks < 75)
    {
        printf("A-");
    }
    else if (marks >= 65 && marks < 70)
    {
        printf("B+");
    }
    else if (marks >= 60 && marks < 65)
    {
        printf("B");
    }
    else if (marks >= 55 && marks < 60)
    {
        printf("B-");
    }
    else if (marks >= 50 && marks < 55)
    {
        printf("C+");
    }
    else if (marks >= 45 && marks < 50)
    {
        printf("C");
    }
    else if (marks >= 40 && marks < 45)
    {
        printf("D");
    }
    else if (marks >= 0 && marks <= 39)
    {
        printf("Fail");
    }
    else
    {
        printf("Wrong Number");
    }
}
// End Code