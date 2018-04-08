#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define UNUSED(x) (void)(x)

/* Zadání:
 * Vytvoøit program, který bude s hráèem hrát polupární hru Tic-Tac-Toe.
 * Program bude od hráèe pøijímat jednotlivé tahy a pomocí funkce random
 * bude náhodnì vybírat, na která pole zahraje tah za AI protivníka. Herní
 * plocha bude pøedstavovat dvourozmìrné pole o velikosti 3x3. Po každém
 * zahrání tahu bude na øadì druhý hráè. Po každm zahrání tahu bude vypsán
 * obsah herní plochy (gameboard) a bude zavolána funkce, která ovìøí zda
 * nìkdo vyhrál nebo zda došlo k plnému zaplnìní plochy (draw), pokud ano,
 * tak ukonèí program a vypíše výsledek hry.
 * Hráè vyhrává v pøípadì, že poskládá tøi symboly (X) v øadì, sloupci èi
 * diagonále. Je tøeba také pomyslet i na situace, kdy hráè vyhraje zasazením
 * svého symbolu tak, že tím zaplní poslední místo na herní desce.
 */

// Hlavní funkce spouštící celou hru. gameboard - herní plocha 3x3
void playGame(int gameboard)
{
   UNUSED(gameboard);
}

// Vypíše obash herní plochy na obrazovku.
void printGameboard(int gameboard)
{
   UNUSED(gameboard);
}

// Generuje tah za poèítaè (AI protivníka). Pokud je vybrané pole obsazené,
// opakuje dokud nenarazí na volné herní pole.
void generateComputerTurn(int gameboard)
{
   UNUSED(gameboard);
}

// Naèítá tah hráèe, pøijímá hodnoty od 1-9, které reprezentují na jaké pole
// chce hráè hrát.
void playersTurn(int gameboard)
{
   UNUSED(gameboard);
}

// Zkontroluje zda nìkterý z hráèù vyhrál èi zda je zaplnìná herní plocha.
// Pokud ano, vypíše výsledek a ukonèí program.
int checkGameboard(int gameboard)
{
   UNUSED(gameboard);
}

int main()
{
   playGame();
   return 0;
}
