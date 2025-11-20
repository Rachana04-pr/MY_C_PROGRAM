#include<stdio.h>
int main()
{
    int x[]={10,20,30};
    int *p=x;
    printf("%d ",*p);
    p++;
    printf("% d",*p);
    p++;
    printf("% d",*p);
}
