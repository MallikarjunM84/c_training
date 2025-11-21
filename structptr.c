#include <stdio.h>
#include <stdarg.h>
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
  struct student *p =&s1;
  strcpy(p -> name ,"somu");
  p -> age =17;
  p ->marks = 99.99;
  printf("%f\n",p->marks);
  printf("%d\n",p->age);
  printf("%s\n",p->name);
} 