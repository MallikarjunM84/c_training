#include <stdio.h>
#include <stdio.h>
void main()
{
    float *p=(float*)calloc(5,sizeof(float));
    p[0]=67.67;
    p[1]=45.56;
    p[2]=78.78;
    p[3]=56.89;
    p[4]=78.89;
    printf("%f",p[3]);
    free(p);
}
