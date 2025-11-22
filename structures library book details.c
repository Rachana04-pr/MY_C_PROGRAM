#include<stdio.h>
struct book
{
    char title[50];
    char autor[50];
    int year;
};
int main()
{
    int i,n;
    printf("enter number of books:");
    scanf("%d",&n);
    struct book booklist[n];
    for(i=0;i,n;i++)
    {
        printf("enter title,autor,and year for book%d:\n",i+1);
        scanf("%s %s %d",booklist[i].title,booklist[i].autor,&booklist[i].year);
    }
    printf("\nLibrary Book details:\n");
    for(i=0;i<n;i++)
    {
        printf("Book %d:%s by %s(%d)\n",i+1,booklist[i].title,booklist[i].autor,booklist[i].year);
    }
    return 0;
}
