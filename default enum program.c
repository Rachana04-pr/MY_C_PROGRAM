#include<stdio.h>
enum week{
    sunday,monday,tuesday,wednesday,thursday,friday,saturday
};
int main()
{
    enum week today;
    today=saturday;
    printf("Day number:%d\n",today);
    return 0;
}
