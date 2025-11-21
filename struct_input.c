//structure for name of book,auther,year
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    char name[100];
    char author[100];
    int year;

};
void main()
{
    int n;
    printf("enter number of book  ;");
    scanf("%d", &n);
    struct book b[n];
    for(int i=0; i<n ; i++)
    {
        printf("enter name of book");
        scanf("%s",b[i].name);

        printf("enter the author of book :");
        scanf("%s",b[i].author);

        printf("enter the year of book :");
        scanf("%d",&b[i].year );
    }
    for(int i=0;i<n;i++)
    {
        printf("%s \n",b[i].name);
        printf("%s \n",b[i].author);
        printf("%d\n", b[i].year);
    }

}