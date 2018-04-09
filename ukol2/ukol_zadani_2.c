#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define UNUSED(x) (void)(x)

/* Zadání:
 * Vytvorit program, ktery bude s hracem hrát popularní hru Tic-Tac-Toe.
 * Program bude od hrace prijímat jednotlivé tahy a pomocí funkce random
 * bude náhodne vybírat, na ktera pole zahraje tah za AI protivníka. Herní
 * plocha bude predstavovat dvourozmerne pole o velikosti 3x3. Po kazdem
 * zahrani tahu bude na radì druhy hrac. Po kazdem zahrani tahu bude vypsan
 * obsah herní plochy (gameboard) a bude zavolana funkce, která overí zda
 * nekdo vyhral nebo zda doslo k plnemu zaplneni plochy (draw), pokud ano,
 * tak ukoncí program a vypíše výsledek hry.
 * Hrac vyhrává v prípade, že poskládá tri symboly (X) v rade, sloupci ci
 * diagonále. Je treba také pomyslet i na situace, kdy hrác vyhraje zasazením
 * svého symbolu tak, že tím zaplní poslední místo na herní desce.
 */

// Hlavní funkce spouštící celou hru. gameboard - herní plocha 3x3
void playGame(int gameboard)
{
   UNUSED(gameboard);
}

// Vypíše obsah herní plochy na obrazovku.
void printGameboard(int gameboard)
{
   UNUSED(gameboard);
}

// Generuje tah za pocítac (AI protivníka). Pokud je vybrané pole obsazené,
// opakuje dokud nenarazí na volné herní pole.
void generateComputerTurn(int gameboard)
{
   UNUSED(gameboard);
}

// Nacítá tah hráce, prijímá hodnoty od 1-9, které reprezentují na jaké pole
// chce hrác hrát.
void playersTurn(int gameboard)
{
   UNUSED(gameboard);
}

// Zkontroluje zda nekterý z hrác vyhrál ci zda je zaplnená herní plocha.
// Pokud ano, vypíše výsledek a ukoncí program.
int checkGameboard(int gameboard)
{
   UNUSED(gameboard);
}

int main()
{
   playGame();
   return 0;
}
