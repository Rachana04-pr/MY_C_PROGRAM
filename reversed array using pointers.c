#include<stdio.h>
int main()
{
    int arr[100],n=5,*start,*end,temp;
    printf("enter the element");
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    start=arr;
    end=arr+n-1;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printf("Reversed array");
    for(int i=0;i<5;i++)
    printf("%d ",arr[i]);
    return 0;
    
}
