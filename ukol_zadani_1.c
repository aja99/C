#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define UNUSED(x) (void)(x)

/*
 * Zadání:
 * Program přijme ze standardního vstupu soubor, který bude obsahovat
 * statistická data. Je třeba vytvořit funkce, které budou s těmito daty
 * pracovat a provedou nad nimi patřičné operace.
 * Uživatel bude moct vybrat, které udaje chce vypsat prostřednictvím
 * parametru funkce menu().
 *
 * Řešení nahraj na Git, odevzdávej pouze soubor ukol_zadani_1.c
 *
 * FILE *soubor - bude obsahovat ukazatel na soubor, se kterým pracujeme
 * int array - bude obsahovat data, se kterými budeme pracovat
 */

// Načte data ze souboru a vloží je do pole s výsledky.
int loadData(FILE *soubor, int array)  {
  UNUSED(soubor);
  UNUSED(array);
  // TO-DO
}

// Vypočítá průměr hodnot v poli a vrátí jeho hodnotu.
int printAverage(int array) {
  UNUSED(array);
  // TO-DO
}

// Vypočítá modus (nejčastěji zastoupená hodnota v poli) a vrátí jeho hodnotu.
int printModus(int array) {
  UNUSED(array)
  // TO-DO
}

/* Vypíše nabídku ovládání programu a volá jednotlivé funkce pomocí parametru
 * zadaného uživatelem. Tento výběr provádí volání funkcí v klauzuli switch.
 * Parametry které switch vyhodnocuje:
 * 'a' - zavolá funkci printAverage();
 * 'm' - zavolá funkce printModus();
 * 'i' - vypíše nápovědu o parametrech, které vyhodnocuje
 * '0' - ukončí funkce (return)
 */
void menu(int array) {
  UNUSED(array)
  // TO-DO
}

int main()  {
  return;
}
