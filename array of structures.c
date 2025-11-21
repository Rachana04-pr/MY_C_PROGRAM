#include<stdio.h>
int main()
{
    struct rajesh
    {
        int age;
        float marks;
    };
    struct rajesh raj[3];
    for(int i=0;i<3;i++)
    {
        printf("enter age and marks\n");
        scanf("%d%f",&raj[i].age,&raj[i].marks);
    }
}
