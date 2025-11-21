#include <stdio.h>
void names(char first[],char last[] , char sw)
{
    int i = 0;
    char full[100];
    while(first[i]!='\0')
    {
        full[i] = first[i];
        i++;
    }

    full[i]=' ';
    i++;
    int j = 0;

    while (last[j]!='\0')
    {
        full[i]=last[j];
        i++;
        j++;
    }
    full[i]=' \0';
        printf("%s \n",full);
    int len = i+1;
    if (len<sw)
     printf(" fits in screen ");
     else
     printf("does not fit in the sreen!");

} 
void main()
{
    char first[10] ="Raj";
    char last [10]="kumar";
    char sw=6;
    names(first,last,sw);
}