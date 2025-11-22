#include<stdio.h>
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int balance1,balance2;
    printf("enter balance for account1:");
    scanf("%d",&balance1);
    printf("enter balance for account2:");
    scanf("%d",&balance2);
    printf("\nBefore swapping:\n");
    printf("account1 balance:%d\n",balance1);
    printf("account2 balance:\n",balance2);
    swap(&balance1,&balance2);
    printf("\n after swapping:\n");
    printf("account1 balance:%d\n",balance1);
    printf("account2 balance:%d\n",balance2);
}

    
