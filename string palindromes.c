#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],rev[50];
   int i,len;
   printf("Enter the string");
   scanf("%s",str);
     len=strlen(str);
     for(i=0;i<len;i++){
       rev[i]=str[len-1-i];
}       
rev[len]='\0';
if(strcmp(str,rev)==0)
printf("It is a palindrome");
else
printf("It is not a palindrome");
}
