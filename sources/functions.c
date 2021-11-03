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


void addArmsToInventory(Inventory* inventory, Arms* arms){

    Inventory value =  *inventory;
    Arms value2 =  *arms;

    for(int i = 0; i<=20 ; i++){

        if( value.arms[i].damage == 0 ){
            value.arms[i] = value2;
            break;
        }

    }

}