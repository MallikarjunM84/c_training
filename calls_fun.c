#include <stdio.h>
void sum_value(int a,int b)
{
    int sum=a+b;
    printf("%d  ",sum);

}
void sum_ref(int *a, int *b)
{
    int sum = *a + *b;
    printf("%d  ",sum);

}
void main()
{
    int a=45;
    int b=34;
    printf("call by value : \n");
    sum_value(a,b);//call by value
    printf("call by reference: \n");
    sum_ref(&a,&b);//call by ref
}