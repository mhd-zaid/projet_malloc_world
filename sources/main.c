#include <stdio.h>
#include "data.c"
#include "maps.c"
#include "functions.c"

int main(int argc, char *argv[])
{
// Test de l'alimentation de données

   /* alimentationDonnees();
    printf("%s\n", DiamondSpear.name);
    printf("%d\n", DiamondSpear.damage);
    printf("%d\n", DiamondSpear.durability);*/

// Test de l'affichage de Carte + deplacement du joueur

    //srand(time(NULL));
     //  int randomSizeMap = randomNumber(7, 15);
     //  int** map = createMap(10,3);
    //   printf("%d  -----long",longMap(map));
      /* printMap(map, randomSizeMap);
       printf("deplacement joueur");
       movePlayer(map,randomSizeMap);*/
    //printMap(map, 10);
    //playGame(map, 10);

//Test de la fonction qui ajoute une arme a un inventaire

   Player BruceBanner;
   Inventory InventoryStart;

    addArmsToInventory(&InventoryStart,&WoodSword);
    printf("%d",InventoryStart.arms[0].durability);
    
}