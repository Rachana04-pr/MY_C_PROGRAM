#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,distance;
    printf("enter the x1 and y1:");
    scanf("%f %f",&x1,&y1);
    printf("enter the x2 and y2:");
    scanf("%f %f",&x2,&y2);
    distance=sqrt(x2-x1)*(x2-x1+(y2-y1)*(y2-y1));
    printf("The straight line distance between the points is:%.2f\n",distance);}
