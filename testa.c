//write a c program which adds 3 number  and its reference
#include <stdio.h>
void add(int *a, int *b ,int *c)
{
   int add= *a+*b+*c;
   printf("%d/n",add); 
}
void main()
{
    int a= 3;
    int b= 5;
    int c= 6;
    add(&a,&b,&c);
     
}