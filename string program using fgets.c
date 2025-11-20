#include<stdio.h>
int main()
{
    char rachana[20];
    printf("Enter the array\n");
    fgets(rachana,sizeof(rachana),stdin);
    printf("%s",rachana);
}
