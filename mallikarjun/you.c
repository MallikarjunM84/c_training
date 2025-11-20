//write a fuvtion which will except two input parameters x,y and returens x2,y2
#include <stdio.h>
int mypara(int x,int y)
{
    int sum= x*x+y*y;
    return sum;
}
void main()
{
    int x=10;
    int y=20;
    printf("%d",mypara(x,y));
}