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
 * double array - bude obsahovat data, se kterými budeme pracovat
 */

// Načte data ze souboru a vloží je do pole s výsledky.
double loadData(FILE *soubor, double array)  {
  // TO-DO
}

// Vypočítá průměr hodnot v poli a vrátí jeho hodnotu.
double printAverage(double array) {
  // TO-DO
}

// Vypočítá modus (nejčastěji zastoupená hodnota v poli) a vrátí jeho hodnotu.
double printModus(double array) {
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
void menu(void) {
  // TO-DO
}

int main()  {
  return;
}
