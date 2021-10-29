#include <stdio.h>
#include "data.c"
#include "maps.c"

int main(int argc, char *argv[])
{
   /* alimentationDonnees();
    printf("%s\n", DiamondSpear.name);
    printf("%d\n", DiamondSpear.damage);
    printf("%d\n", DiamondSpear.durability);*/

    srand(time(NULL));
       int randomSizeMap = randomNumber(7, 15);
       int** map = createMap(10,3);
    //   printf("%d  -----long",longMap(map));
      /* printMap(map, randomSizeMap);
       printf("deplacement joueur");
       movePlayer(map,randomSizeMap);*/
    printMap(map, 10);
    playGame(map, 10);
    
}