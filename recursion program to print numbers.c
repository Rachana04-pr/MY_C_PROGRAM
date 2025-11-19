#include<stdio.h>
void printnumbers(int n)
{
    if(n==0)
    return;
    printnumbers(n-1);
    printf("%d",n);
}
int main()
{
    printnumbers(5);
}
