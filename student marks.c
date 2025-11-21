#include<stdio.h>
int main()
{
    int marks;
    printf("enter the students marks:");
    scanf("%d",&marks);
    if(marks<0||marks>100)
    printf("invalid marks!please enter a value between 0 and 100\n");
    else if(marks>=90)
    printf("Grade:A\n");
    else if(marks>=75)
    printf("grade:B\n");
    else if(marks>=60)
    printf("grade:c\n");
    else if(marks>=50)
    printf("grade:D\n");
    else
    printf("grade:F\n");
}
