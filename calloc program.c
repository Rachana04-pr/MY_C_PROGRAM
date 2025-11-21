#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*arr;
    int n=5;
    arr=(int*)calloc(5,sizeof(int));
    {
        printf("Array values after the calloc:\n");
        for(int i=0;i<5;i++)
        printf("%d",arr[i]);
    }
    free(arr);
}
