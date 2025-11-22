#include<stdio.h>
int main()
{
    union rajesh
    {
        int age;
        float mark;
    };
    union rajesh r;
    r.age=10;
    printf("%d",r.age);
    r.mark=10.7;
    printf("%f",r.mark);
}
