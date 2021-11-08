#include <stdio.h>
int main()
{
    /* Die character Variable 'b' wird deklariert und
    mit dem Zeichen 'b' initialisiert*/
    char character = 'b';

    /* b wird intern als ganze Zahl gespeicher.
    Um es als char auszugeben, wird das entsprechende
    Formatzeichen verwendet.*/
    printf("b als character : %c \n", character);

    /*Um den Ganzzahlenwert des Zeichens zu erhalten,
    kann man des integer Formatzeichen verwenden*/
    printf("b als int : %i \n", character);

    /* Das Gleiche gilt für numerische char*/
    character = '7';
    printf("'7' als character : %c \n", character);
    printf("'7' als int : %i \n", character);

    getchar();
    getchar();

    return 0;
}
