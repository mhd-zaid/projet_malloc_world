#include <stdio.h>
#include "data.c"
#include "maps.c"
#include "inventory.c"
#include "pnj.c"

int main(int argc, char *argv[])
{
// Test de l'alimentation de données

   /*alimentationDonnees();
    printf("%s\n", DiamondSpear.name);
    printf("%d\n", DiamondSpear.damage);
    printf("%d\n", DiamondSpear.durability);*/

// Test de l'affichage de Carte + deplacement du joueur
//*********************************************************************
    //srand(time(NULL));
       //int randomSizeMap = randomNumber(7, 15);
       //int** map = createMap(10,3);
//*********************************************************************
      // printf("%d  -----long",longMap(map));
//*********************************************************************
       //printMap(map, randomSizeMap);
       //printf("deplacement joueur");
       //movePlayer(map,randomSizeMap);
    //printMap(map, 10);
    //playGame(map, 10);
//*********************************************************************

//Test de la fonction qui ajoute une arme a un inventaire

   Player *BruceBanner = malloc(sizeof(Player));
   Inventory *InventoryStart = malloc(sizeof(Inventory));

    alimentationDonnees();
    addArmsToInventory(BruceBanner,WoodSword);
    addArmsToInventory(BruceBanner,StoneSword);
    addArmsToInventory(BruceBanner,IronSword);
    addArmsToInventory(BruceBanner,DiamondSword);

    for(int i = 0 ; i <= 1 ; i++){
       printf("%s\n",BruceBanner->inventory.arms[i].name);
       printf("%d\n",BruceBanner->inventory.arms[i].damage);
       printf("%d\n",BruceBanner->inventory.arms[i].durability);
       printf("%d\n",BruceBanner->inventory.arms[i].durabilityMax);
    }

   talkPnj(BruceBanner);

   for(int i = 0 ; i <= 1 ; i++){
       printf("%s\n",BruceBanner->inventory.arms[i].name);
       printf("%d\n",BruceBanner->inventory.arms[i].damage);
       printf("%d\n",BruceBanner->inventory.arms[i].durability);
       printf("%d\n",BruceBanner->inventory.arms[i].durabilityMax);
    }

    
   // SOUCIS DANS LES METHODES D'AJOUT DANS L'INVENTAIRE (SAUF POUR LES ARMES)
   



}