/* casting.c
* Programm zeigt implizite und explizite Typumwandlungen
*/
#include <stdio.h>

int main(void)
{
    int x = 5, y = 2;
    float z;
    /* hier liefert z=2.000000*/
    z = x / y;
    printf("%f\n", z);


    /* Explizite Datentypumwandlung führt zu z=2.500000*/
    z = (float) x / (float) y;
    printf("%f\n", z);

    /*Implizites Type Casting für y führt zu z=2.500000*/
    z = (float) x / y;
    printf("%f\n", z);

    return 0;
}
