//write a C FUCTION which will accept an array its as size as n and return the first element
#include <stdio.h>
#include <stdlib.h>

int subarr(int arr[],int n)
{
        int sub = arr[0] - arr[n-1];
         return abs(sub);
}
void main()
{
    int n=5;
    int arr[5]={23,45,67,89,90};
    printf("%d",subarr(arr,n));
}
