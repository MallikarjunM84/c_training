#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    strcpy(s1.name, "Mahantu");
    s1.age = 19;
    s1.marks = 75.5;
    

    struct student s2;
    strcpy(s2.name ,"Abhi");
    s2.age =18;
    s2.marks=99.99;
    
     
     struct student s3 ={"mallu" ,20,65.56,};
     printf("%d ",s1.age);
     printf("%f ",s2.marks);
     printf("%s ",s3.name);
}