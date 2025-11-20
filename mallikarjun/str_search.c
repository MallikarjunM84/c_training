#include <stdio.h>
#include <string.h>
void main()
{
    char des [100]= " we are genious";
    char se [10] = "genious";
    if ((strstr(des, se)) != NULL)
    printf("found");
    else
    printf("not found");
}