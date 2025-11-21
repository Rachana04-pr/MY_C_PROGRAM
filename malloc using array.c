#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*arr=(int*)malloc(10*sizeof(int));
    for(int i=0;i<5;i++)
    {
        printf("enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("array elements:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    free(arr);
    return 0;
}
