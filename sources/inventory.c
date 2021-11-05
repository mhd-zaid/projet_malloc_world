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

void addArmsToInventory(Player *player, Arms arms){
    
    for(int i = 0 ; i<=20; i++){
        if(player->inventory.arms[i].durability == 0 ){
            player->inventory.arms[i] = arms;
            player->inventory.storage += 1;
            break;
        }
    }
}
/**************************************************/

void addCraftRessourcesToInventory(Player *player, CraftResources craftResources){
    
    for(int i = 0 ; i<=20; i++){
        if(player->inventory.ressources[i].name == NULL ){
            player->inventory.ressources[i] = craftResources;
            player->inventory.storage += 1;
            break;
        }
    }
}
/**************************************************/

void addToolsToInventory(Player *player, Tools tools){
    
    for(int i = 0 ; i<=20; i++){
        if(player->inventory.tools[i].durability == 0 ){
            player->inventory.tools[i] = tools;
            player->inventory.storage += 1;
            break;
        }
    }
}
/**************************************************/

void addHealingsToInventory(Player *player, Healings healings){
    
    for(int i = 0 ; i<=20; i++){
        if(player->inventory.healings[i].restoreLife == 0 ){
            player->inventory.healings[i] = healings;
            player->inventory.storage += 1;
            break;
        }
    }
}
/**************************************************/

void addArmorsToInventory(Player *player, Armors armors){
    
    for(int i = 0 ; i<=20; i++){
        if(player->inventory.armors[i].damageResist == 0 ){
            player->inventory.armors[i] = armors;
            player->inventory.storage += 1;
            break;
        }
    }
}
/**************************************************/
