#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p =(int*)malloc(4*sizeof(int));
    p[0]=90;
    p[1]=67;
    p[2]=89;
    p[3]=100;
    printf("%d",p[0]);
    free(0);

}