#include <stdio.h>
void exam(int m1,int m2,int m3)
{
    if(m1>=40 && m2>=40 && m3>=40)
    printf("congraulation your are passed/n");
    else
    printf("your are failed/n");
    float avg = (float)(m1+m2+m3)/3;
    printf("%f/n",avg );
}
void main()
{
    int m1,m2,m3;
    printf("enter m1,m2,m3 :");
    scanf("%d%d%d",&m1,&m2,&m3);
    exam(m1,m2,m3);
}
