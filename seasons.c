#include <stdio.h>
enum months
{
    jan=1,
    feb, march,april,may, june,july,aguest ,sept,oct,nov,december

};
void main ()
{
    enum months m ;
    m= may;
    char *season;
    switch(m)
    {
        case december:case jan:case feb:
        season ="winter";
        break;
        case march: case april: case may:
        season= "summer";
        break;
        case june:case july: case aguest:
        season= "monsoon";
        break;
        case sept: case oct :case nov:
        season="spring";
        break;
    
    }
    printf("%d is %s ",m,season);
}