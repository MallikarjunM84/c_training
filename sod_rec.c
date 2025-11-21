#include <stdio.h>
int sum_digit_recur(int n)
{
    if(n==0)
    return 0;
    int d= n%10;
    return d+sum_digit_recur(n/10);
    
}
int main()
{
    int n;
    printf("enter the n");
    scanf("%d",&n);
    printf("%d",sum_digit_recur(n));
    
}
