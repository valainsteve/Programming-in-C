/*
* Programm zur Demonstration der verwendung von 'void' in Funktionen
*/

#include <stdio.h>

/*Prototypen der Funktionen*/
void druckeEineZahl(int zahl);
int gibEineZahlein(void);


int main()
{
    /* die Variable eigegebeneZahl wird deklariert, damit sie
    später verwendet werden kann.*/
    int eingegebeneZahl;

    /* Die Funktion gibEineZahlein wird aufgerufen und die Variable
    eingegebeneZahl mit dem Rückgabewert der Funktion belegt.*/
    eingegebeneZahl= gibEineZahlein();

    /* die Funktion druckeEineZahl wird aufgerufen. Ihr wird als Argument die
    Variable eingegebeneZahl übergeben, mit der die Funktion dann arbeitet. */
    druckeEineZahl(eingegebeneZahl);

    /*Der Aufruf von getchar() hat den Zweck, dass die Konsole sich nicht sofort schließt,
    wenn man das .exe file per Doppelklick startet. */
    getchar();
    getchar();

    /*Die Funktion main() hat als Rückgabewert einen int defniert.
    Mit dem return Befehl wird ein int Wert, nämlich 0 zurückgegeben */
    return 0;
}


/* Die Funktion druckeEineZahl nimmt eine Zahl als Argument entgegen und druckt sie aus.
Die Funktion gibt keinen wie auch immer gearteten Wert zurück. daher steht vor dem Funktionsnamen 'void */
void druckeEineZahl(int zahl)
{
    printf("Hier wird die Zahl ausgegeben: %d\n", zahl);
    return;
}


/* Die Funktion gibEineZahlein fordert den Benutzer auf, eine Zahl einzugeben.
Sie erwartet kein Argument, daher steht in den runden Klammern void.
Die eingegebene zahl wird als Rückgabewert der Funktion zurückgeliefert.
Daher steht vor dem Funktionsnamen 'int' */
int gibEineZahlein(void)
{
    int zahl;
    printf("Bitte geben Sie eine Zahl ein.\n");
    scanf("%d", &zahl);
    return zahl;
}
