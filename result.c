#include<stdio.h>
int main()
{
    int grade;
    printf("Enter the student's grade: ");
    scanf("%d", &grade);
    if (grade>=60)
    {
        printf("Congratulations, You have PASSED!");
    }
    else
    {
        printf("sorry you FAILED!");
    }
    return 0;
}
