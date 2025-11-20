#include <stdio.h>
int search(int arr[],int key,int n)
{
    for(int i=0; i<n; i++)
    {
        if (arr[i]==key)
        return 1;
    }
    return 0;
}

int main()
{
    int n=5;
    int arr[5]={45,67,89,23,12,};
    int key;
    printf("can you pls tell what you want");
    scanf("%d",&key);
    printf("%d",search(arr,key,n));
}    