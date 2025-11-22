#include<stdio.h>
void swapByvalue(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("preview swap(By value):%d %d\n",a,b);
}
void swapByReference(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("actual swap(By Reference):%d %d\n",*a,*b);
}
int main()
{
    int x,y;
    printf("enter two currency values:");
    scanf("%d %d",&x,&y);
    swapByvalue(x,y);
    printf("After Call by value:%d %d\n",x,y);
    swapByReference(&x,&y);
    printf("After call by reference:%d %d\n",x,y);
    return 0;
}
