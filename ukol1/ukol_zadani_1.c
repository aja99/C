#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define UNUSED(x) (void)(x)

/*
 * Zadání:
 * Program pøijme ze standardního vstupu soubor, který bude obsahovat
 * statistická data. Je tøeba vytvoøit funkce, které budou s tìmito daty
 * pracovat a provedou nad nimi patøièné operace.
 * Uživatel bude moct vybrat, které udaje chce vypsat prostøednictvím
 * parametru funkce menu().
 *
 * Øešení nahraj na Git, odevzdávej pouze soubor ukol_zadani_1.c
 *
 * FILE *soubor - bude obsahovat ukazatel na soubor, se kterým pracujeme
 * int array - bude obsahovat data, se kterými budeme pracovat
 */

// Naète data ze souboru a vloží je do pole s výsledky.
void loadData(int array[50],int *v) {
  FILE *f = fopen("ukol_zadani_1_data.txt","r");
  if (f==NULL)
    return -1;
 int i=0;
 while (fscanf(f,"%d",&array[i])!=EOF)
  {
    i++;
  }
  *v=i;
for (int a=0;a<i;a++)
{printf ("%d ", array[a]);

}
}

// Vypoèítá prùmìr hodnot v poli a vrátí jeho hodnotu.
float printAverage(int array[50], int *v) {
int p=0;
float pom=0;
for(p=0; p<*v; p++)
{pom+=array[p];
    }
pom=pom/p;
return pom;

}

// Vypoèítá modus (nejèastìji zastoupená hodnota v poli) a vrátí jeho hodnotu.
int printModus(int array[50], int v) {

   int cislo = 0, max = 0, i, j;

   for (i = 0; i < v+1; i++) {
      int pocet = 0;

      for (j = 0; j < v+1; j++) {
         if (array[j] == array[i])
         pocet++;
      }

      if (pocet > max) {
         max = pocet;
         cislo = array[i];
      }
   }

   return cislo;

}
/* Vypíše nabídku ovládání programu a volá jednotlivé funkce pomocí parametru
 * zadaného uživatelem. Tento výbìr provádí volání funkcí v klauzuli switch.
 * Parametry které switch vyhodnocuje:
 * 'a' - zavolá funkci printAverage();
 * 'm' - zavolá funkce printModus();
 * 'i' - vypíše nápovìdu o parametrech, které vyhodnocuje
 * '0' - ukonèí funkce (return)
 */
void menu(int pole[50], int *v) {
  char i;
printf(" zmackni 'a' - zjisti prumer \n zmackni 'm' - zjisti Modus\n zmackni 'i' - vypise napovedu o parametrech, ktere vyhodnocuje\n zmackni '0' -pro ukonceni programu");
  i= getchar();
  switch(i){
  case 'a' :
     printf("%.2f", printAverage(pole,&v));
      break;
  case 'm' :
         printf("%d", printModus(pole,v));
        break;
  case 'i' :
        break;
  case '0' :
      return 0;
        break;
  default:
        break;

          }
  // TO-DO
}

int main()  {

    int pole[50];
    int *v;
    loadData(pole, &v);
    printf("\n %d", v);
    menu(pole, v);
  return 0;

}
