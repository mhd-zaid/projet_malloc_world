/*
** Filename : structures
**
** Made by : Messai Rafiq - Megnouche Zinedine - Mouhamad Zaid 
**
** Description : contains all the structures necessary for the game.
*/
#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

/**************************************************/

void addArmsToInventory(Inventory *inventory, Arms arms){
    
    for(int i = 0 ; i<=20; i++){
        if(inventory->arms[i].durability == 0 ){
            inventory->arms[i] = arms;
            inventory->storage += 1;
            break;
        }
    }
}
/**************************************************/

void addCraftRessourcesToInventory(Inventory *inventory, CraftResources craftResources){
    
    for(int i = 0 ; i<=20; i++){
        if(inventory->ressources[i].name == NULL ){
            inventory->ressources[i] = craftResources;
            inventory->storage += 1;
            break;
        }
    }
}
/**************************************************/

void addToolsToInventory(Inventory *inventory, Tools tools){
    
    for(int i = 0 ; i<=20; i++){
        if(inventory->tools[i].durability == 0 ){
            inventory->tools[i] = tools;
            inventory->storage += 1;
            break;
        }
    }
}
/**************************************************/

void addHealingsToInventory(Inventory *inventory, Healings healings){
    
    for(int i = 0 ; i<=20; i++){
        if(inventory->healings[i].restoreLife == 0 ){
            inventory->healings[i] = healings;
            inventory->storage += 1;
            break;
        }
    }
}
/**************************************************/

void addArmorsToInventory(Inventory *inventory, Armors armors){
    
    for(int i = 0 ; i<=20; i++){
        if(inventory->armors[i].damageResist == 0 ){
            inventory->armors[i] = armors;
            inventory->storage += 1;
            break;
        }
    }
}
/**************************************************/
