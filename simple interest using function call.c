#include<stdio.h>
int sicalculator()
{
    int p,t,r,si;
    printf("enter your principle amount\n");
    scanf("%d",&p);
    printf("enter your time\n");
    scanf("%d",&t);
    printf("enter the rate of amount\n");
    scanf("%d",&r);
    si=(p*r*t)/100;
    printf("%d",si);
}
int main()
{
    sicalculator();
}
