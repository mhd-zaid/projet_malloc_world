/*
** Filename : structures
**
** Made by : Messai Rafiq - Megnouche Zinedine - Mouhamad Zaid 
**
** Description : contains all the structures necessary for the game.
*/

#include "structures.h"
#include "data.c"
#include "inventory.c"

// Fonction qui créer un nouveau joueur (pas oublier de free l'espace allouer lorsque le personnage meurt).
void newPlayer(){

    Player *BruceBanner = malloc(sizeof(Player));
    Inventory *InventoryStart = malloc(sizeof(Inventory));

    BruceBanner->CurrentlifePoint = 100;
    BruceBanner->experience = 0;
    BruceBanner->inventory = *InventoryStart;
    addArmsToInventory(InventoryStart,WoodSword);
    addToolsToInventory(InventoryStart,WoodPickaxe);
    addToolsToInventory(InventoryStart,WoodBillHook);
    addToolsToInventory(InventoryStart,WoodChopped);
    BruceBanner->level = 1;
    BruceBanner->maxLifePoint = 100;

}