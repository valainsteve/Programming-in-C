/*
* Deklaration, Initialisierung und Verwendung von Variablen
*/

#include <stdio.h>

int main( )
{
    /*die Variable 'groesse' wird deklariert, d.h. bekanntgemacht.
    Der Datentyp der Variable ist float. Dadurch wird mitgeteilt, wieviel Speicher
    für die Variable benötigt wird */
    float groesse;

    /* Analog: Deklaration und Typzuweisung für normalgewicht */
    float normalgewicht;

    /* die Variable groesse wird initialisiert, d.h. initial mit einem Wert belegt */
    groesse = 180.0;

    /*die Variable groesse wird für eine Berechnung verwendet*/
    normalgewicht = groesse - 100.0 ;

    /* Das Ergebnis der Berechnung wird ausgegeben*/
    printf( "Ihr Normalgewicht betraegt : %.2f \n", normalgewicht );

    /*Der Aufruf von getchar() hat lediglich  den Zweck, dass die Konsole sich nicht sofort schließt,
    wenn man das .exe file per Doppelklick startet. */

    getchar();

    /*Die Funktion main() hat als Rückgabewert einen int defniert.
    Mit dem return Befehl wird ein int Wert, nämlich 0 zurückgegeben */
    return 0;
}
