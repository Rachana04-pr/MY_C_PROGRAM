#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks>=90)
    printf("excellent");
   else if(marks>=80)
    printf("average");
    else if(marks>=50)
    printf("just pass");
}
