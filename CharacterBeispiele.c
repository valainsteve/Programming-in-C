/*
* Programm um den Zusammenhang zwischen char und int zu zeigen
*/

#include <stdio.h>

int main(){

    /*die char Variable a wird deklariert und mit dem Wert 'A'
    initialisiert*/
    char a= 'A';

    /*i wird deklariert*/
    int i;

    /*der Wert von a wird als character und als int ausgegeben*/
    printf("Beispiel mit einem Buchstaben als char.\n");
    printf("a als char ist %c \n",a );
    printf("a als int ist %d \n",a );
    printf("\n \n");

    /* a wird mit dem numerischen char '3' belegt*/
    a= '3';
    /*der Wert von a wird als character und als int ausgegeben*/
    printf("Beispiel mit einem numerischen Wert als char.\n" );
    printf("a als char ist %c \n",a );
    printf("a als int ist %d \n",a );
    printf("\n \n");

    /* um den numerischen char in den entsprechenden int umzurechnen,
    wird die folgende Formel verwendet */

    printf("aus dem numerischen char wird nun der entsprechende integer Wert berechnet.\n");
    a = a - '0';

    /*die int Variable i wird mit dem int Wert a belegt.*/
    i = a;
    printf("Jetzt ist i  %d \n",i );

    /* a hat jetzt einen anderen Wert als vorher, der als
    int und als char ausgegeben wird.*/
    printf("Nach der Umrechnung ist a als int %d \n",a );
    printf("Nach der Umrechnung ist a als char ist  %c \n",a );

    getchar();
    getchar();
    return 0;
}
