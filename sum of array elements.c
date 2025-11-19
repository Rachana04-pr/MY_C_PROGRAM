#include<stdio.h>
int main()
{
    int array[5],sum=0;
    for(int i=0;i<5;i++)
    {
        printf("Enter elements\n");
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    printf("%d",sum);
}
