#include<stdio.h>
#include<math.h>
#define pl 3.14
void main()
{
    float sum,term,x,nume,i,fact;
    int deg;
    i=2,fact=1;
    printf("Enter angle in degree:");
    scanf("%d",&deg);
    x=(deg*pl)/180;
    sum=x;
    nume=x;
    do
    {
        fact=fact*i*(i+1);
        nume=-nume*x*x;
        term=nume/fact;
        sum+=term;
        i+=2;
    }
    while(fabs(term)>=0.0001);
    printf("Approximated sin(%d)+%.2f\n",deg,sum);
    
}
