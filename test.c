//write a fuction which will multiply 3 number and call it by reference
#include <stdio.h>
void product(int *a,int *b,int *c)
{
    int product = (*a)*(*b)*(*c);
    printf("%d\n",product);
}
void main()
{
    int a=2;
    int b=5;
    int c=7;
    product(&a,&b,&c);
}