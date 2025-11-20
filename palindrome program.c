int main()
{
    int num=121,original,rev=0,rem;
    original=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(original==rev)
    {
        printf("It is a palindrom\n");
    }
    else
    {
        printf("It is not a palindrom\n");
    }
}
