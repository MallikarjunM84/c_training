//write  a c fuction which will expect 3 perameters l,b,h,and writtens volume of the cube
#include <stdio.h>
int volume (int l,int b, int h)
{

    int v = l*b*h;
    return v;
}
void main()
{
int l=5;
int b=6;
int h=8;
printf("%d",volume(l,b,h));
}