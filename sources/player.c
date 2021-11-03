/*
** Filename : structures
**
** Made by : Messai Rafiq - Megnouche Zinedine - Mouhamad Zaid 
**
** Description : contains all the structures necessary for the game.
*/

#include "structures.h"
#include "data.c"
#include "functions.c"



Player BruceBanner;
Inventory InventoryStart;

void newPlayer(){

    BruceBanner.CurrentlifePoint = 100;
    BruceBanner.experience = 0;
    BruceBanner.inventory = InventoryStart;
    BruceBanner.level = 1;
    BruceBanner.maxLifePoint = 100;

}