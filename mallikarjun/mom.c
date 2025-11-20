//write a c fuction which will accept 1 input peRiMETER R AND RETURNTHE PARIMTER OF CIRCLE DECLARE PI VALUCE
#include <stdio.h>
  float perimter (int r)

   {
    const float pi=3.14;
    float peri = 2*3.14*r;
    return peri;
   }
void main()
{
    int r=10;
printf("%f",perimter(r));
}