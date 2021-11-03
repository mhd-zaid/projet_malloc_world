#include <stdio.h>
#include "data.c"
#include "maps.c"
#include "inventory.c"

int main(int argc, char *argv[])
{
// Test de l'alimentation de données

   /*alimentationDonnees();
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
   Inventory *InventoryStart = malloc(sizeof(Inventory));

    alimentationDonnees();
    addArmsToInventory(InventoryStart,WoodSword);
    addArmsToInventory(InventoryStart,StoneSword);
    addArmsToInventory(InventoryStart,IronSword);
    addArmsToInventory(InventoryStart,DiamondSword);

    for(int i = 0 ; i <= 20 ; i++){
       printf("%s\n",InventoryStart->arms[i].name);
       printf("%d\n",InventoryStart->arms[i].damage);
       printf("%d\n",InventoryStart->arms[i].durability);
    }
 
    
}