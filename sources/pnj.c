/*
** Filename : structures
**
** Made by : Messai Rafiq - Megnouche Zinedine - Mouhamad Zaid 
**
** Description : contains all the structures necessary for the game.
*/
#include "structures.h"


void fixEquipment(Player *player){

    for(int i = 0; i<player->inventory.storage;i++){

        if(player->inventory.arms[i].damage != 0){
           player->inventory.arms[i].durability =  player->inventory.arms[i].durabilityMax ;
        }

        if(player->inventory.tools[i].durabilityMax != 0){
           player->inventory.tools[i].durability =  player->inventory.tools[i].durabilityMax ;
        }

    }
}


void talkPnj(Player* player){
    printf("Vous rencontrez un Pnj sur votre route, il vous propose 3 options.\n 1-Réparer votre équipement\n 2-Crafter de l'équipement\n 3-Utiliser l'entrepot\n ");
    char keyPress = 0;
    scanf("%c",&keyPress);
        switch (keyPress){
             case '1':
                printf("Votre équipement vient d'etre entierement réparer\n");
                fixEquipment(player);
                break;
            case '2':
                //craftEquipment();
                break;
            case '3':
                //openWarehouse();
                break;
        }

}



