/* Programm um zu demonstrieren, dass nicht initialisierte
Variablen weder zur Compilezeit noch zur Laufzeit einen Fehler verursachen.
Stattdessen wird mit nichtdefnierten Werten gerechnet.*/

int main()
{
    /*Die Variable i wird deklariert, aber nicht initialisiert*/
    int i;

    /*Die Variable wird verwendet, hält aber einen nicht definierten Wert */
    printf("das nicht initialisierte i hat den Wert %d\n",i);
    return 0;
}
