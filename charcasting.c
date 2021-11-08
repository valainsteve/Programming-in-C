/*
* Programm zeigt das casting von char zu int
*/

#include <stdio.h>

main()
{
   int i=7;
   char c ='c';  /*ascii Wert ist 99*/
   int sum;

   sum= i+c;
   printf("Wert der Summe: %d\n", sum);
   getchar();
   return 0;
}
