#include<stdio.h>
void fake_swap(float ca,float cb)
{
    float temp=0;
    temp=ca;
    ca= cb;
    cb=temp;
    printf("fake swap in fuc :ca = %f  cb = %f\n", ca,cb);
}
void real_swap(float *ca,float *cb)
{
    float temp=0;
    temp=*ca;
    *ca=*cb;
    *cb=temp;
    printf("real swap in fuc : ca = %f  cb= %f\n",*ca,*cb);
}
void main()
{
    float ca,cb;
    printf("enter currency ca");
    scanf("%f",&ca);
    printf("enter currency cb");
    scanf("%f",&cb);
    fake_swap(ca,cb);
    printf("fake swap : ca = %f  cb = %f\n",ca,cb);
    real_swap(&ca,&cb);
    printf("real swap : ca = %f  cb = %f\n",ca,cb);
}