#include<stdio.h>
#include<stdio.h>
void main()
{
    char name [12] = "mallikarjun";
    char new[100] = "Hello";
    printf("%c\n", name[5]);//acess
    printf("lenght of string is %d\n",strlen(name ));
    strcat(new, name);//new hello+mallikarjun
    printf("%s",new);
} 
