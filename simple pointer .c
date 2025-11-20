#include<stdio.h>
int main()
{
    int num=10;
    int*p;
    p=&num;
    printf("Value of num=%d\n",&num);
    printf("Address of num=%d\n",&num);
    printf("Pointer p stores=%p\n",p);
    printf("Value using pointer=%d\n",*p);
    return 0;
}
