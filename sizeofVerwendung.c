/* Demonstration der Verwendung von sizeof */

#include <stdio.h>

int main()
{
    int laenge = sizeof(long double);
    printf("Der Speicherplatz einer long double Variable ist %d Bytes.\n", laenge);

    getchar();
    return 0;
}
