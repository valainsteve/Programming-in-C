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
    sp�ter verwendet werden kann.*/
    int eingegebeneZahl;

    /* Die Funktion gibEineZahlein wird aufgerufen und die Variable
    eingegebeneZahl mit dem R�ckgabewert der Funktion belegt.*/
    eingegebeneZahl= gibEineZahlein();

    /* die Funktion druckeEineZahl wird aufgerufen. Ihr wird als Argument die
    Variable eingegebeneZahl �bergeben, mit der die Funktion dann arbeitet. */
    druckeEineZahl(eingegebeneZahl);

    /*Der Aufruf von getchar() hat den Zweck, dass die Konsole sich nicht sofort schlie�t,
    wenn man das .exe file per Doppelklick startet. */
    getchar();
    getchar();

    /*Die Funktion main() hat als R�ckgabewert einen int defniert.
    Mit dem return Befehl wird ein int Wert, n�mlich 0 zur�ckgegeben */
    return 0;
}


/* Die Funktion druckeEineZahl nimmt eine Zahl als Argument entgegen und druckt sie aus.
Die Funktion gibt keinen wie auch immer gearteten Wert zur�ck. daher steht vor dem Funktionsnamen 'void */
void druckeEineZahl(int zahl)
{
    printf("Hier wird die Zahl ausgegeben: %d\n", zahl);
    return;
}


/* Die Funktion gibEineZahlein fordert den Benutzer auf, eine Zahl einzugeben.
Sie erwartet kein Argument, daher steht in den runden Klammern void.
Die eingegebene zahl wird als R�ckgabewert der Funktion zur�ckgeliefert.
Daher steht vor dem Funktionsnamen 'int' */
int gibEineZahlein(void)
{
    int zahl;
    printf("Bitte geben Sie eine Zahl ein.\n");
    scanf("%d", &zahl);
    return zahl;
}
